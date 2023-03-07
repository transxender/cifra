///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2022 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 7/29/2022, 8/19/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP

#include "xos/app/console/crypto/code/base/main_opt.hpp"
#include "xos/app/console/crypto/code/base/to_main_output.hpp"
#include "xos/io/crt/file/reader.hpp"
#include "xos/io/base64/read_to_output.hpp"
#include "xos/io/base64/write_to_output.hpp"
#include "xos/io/base64/output_to.hpp"
#include "xos/io/base64/to_array.hpp"
#include "xos/io/hex/read_to_output.hpp"
#include "xos/io/hex/write_to_output.hpp"
#include "xos/io/hex/output_to.hpp"

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace code {
namespace base {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint(): run_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef to_main_output to_output_t;
    typedef xos::io::base64::reader_to base64_reader_t;
    typedef xos::io::base64::writer_to base64_writer_t;
    typedef xos::io::base64::output_tot<to_output_t> base64_to_output_t;
    typedef xos::io::base64::read_to_outputt<base64_to_output_t> base64_read_to_output_t;
    typedef xos::io::base64::write_to_outputt<base64_to_output_t> base64_write_to_output_t;

    typedef xos::byte_array byte_array_t;
    typedef xos::io::base64::to_arrayt<byte_array_t> to_byte_array_t;
    typedef xos::io::base64::output_tot<to_byte_array_t> base64_to_byte_array_t;
    typedef xos::io::base64::read_to_outputt<base64_to_byte_array_t> base64_read_to_byte_array_t;

    typedef xos::io::hex::output_tot<to_output_t> hex_to_output_t;
    typedef xos::io::hex::reader_to hex_reader_t;
    typedef xos::io::hex::writer_to hex_writer_t;
    typedef xos::io::hex::read_to_outputt<hex_to_output_t> hex_read_to_output_t;
    typedef xos::io::hex::write_to_outputt<hex_to_output_t> hex_write_to_output_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    /// ...encode_source
    virtual int encode_source(const char_t* location) {
        int err = 1;
        const char_t* chars = 0;
        
        if ((chars = location) && (chars[0])) {
            io::crt::file::reader source;

            LOGGER_LOG_DEBUG("source.open(chars = \"" << chars << "\")...");
            if ((source.open(chars))) {
                LOGGER_LOG_DEBUG("...source.open(chars = \"" << chars << "\")");

                err = this->all_encode_source(source);

                LOGGER_LOG_DEBUG("source.close() \"" << chars << "\"...");
                if ((source.close())) {
                    LOGGER_LOG_DEBUG("...source.close() \"" << chars << "\"");
                } else {
                    LOGGER_LOG_ERROR("...failed on source.close() \"" << chars << "\"");
                }
            } else {
                LOGGER_LOG_ERROR("...failed on source.open(chars = \"" << chars << "\")");
            }
        }
        return err;
    }
    /// ...decode_source
    virtual int decode_source(const char_t* location) {
        int err = 1;
        const char_t* chars = 0;
        
        if ((chars = location) && (chars[0])) {
            io::crt::file::reader source;

            LOGGER_LOG_DEBUG("source.open(chars = \"" << chars << "\")...");
            if ((source.open(chars))) {
                LOGGER_LOG_DEBUG("...source.open(chars = \"" << chars << "\")");

                err = this->all_decode_source(source);

                LOGGER_LOG_DEBUG("source.close() \"" << chars << "\"...");
                if ((source.close())) {
                    LOGGER_LOG_DEBUG("...source.close() \"" << chars << "\"");
                } else {
                    LOGGER_LOG_ERROR("...failed on source.close() \"" << chars << "\"");
                }
            } else {
                LOGGER_LOG_ERROR("...failed on source.open(chars = \"" << chars << "\")");
            }
        }
        return err;
    }

    /// ...base64_encode_source
    virtual int base64_encode_source(io::reader& source) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;
        byte_t& byte = this->base64_source(size);
        
        if ((0 < (amount = (ssize_t)size))) {
            ssize_t count = 0;
            to_output_t output_to(*this);
            base64_to_output_t to_output(output_to);
            base64_write_to_output_t output_writer(to_output);
            base64_writer_t writer(output_writer, source);
            
            if (0 < (count = source.read(&byte, size))) {
                writer.on_begin(&byte, ((size_t)count));
                if (amount == count) {
                    do {
                        writer.on_read(&byte, ((size_t)count));
                        if (0 < (count = source.read(&byte, size))) {
                            this->outln("\\");
                        }
                    } while (amount == count);
                    if (0 < count) {
                        writer.on_read(&byte, ((size_t)count));
                    }
                } else {
                    if (0 < count) {
                        writer.on_read(&byte, ((size_t)count));
                    }
                }
                writer.on_end(&byte, ((size_t)count));
                this->outln();
            }
        }
        return err;
    }
    /// ...base64_decode_source
    virtual int base64_decode_source(io::reader& source) {
        int err = 0;
        ssize_t count = 0, amount = 0;
        byte_t byte = 0;

        if (0 < (amount = source.read(&byte, 1))) {
            to_output_t output_to(*this);
            base64_to_output_t to_output(output_to);
            base64_read_to_output_t output_reader(to_output);
            base64_reader_t reader(output_reader, source);
            
            reader.on_begin(&byte, 1);
            do {
                if ((0 > (reader.on_read(&byte, 1)))) {
                    break;
                }
                count += amount;
                amount = source.read(&byte, 1);
            } while (0 < amount);
            reader.on_end(&byte, 1);
        }
        return err;
    }
    virtual int array_base64_decode_source(io::reader& source) {
        int err = 0;
        ssize_t count = 0, amount = 0;
        byte_t byte = 0;

        if (0 < (amount = source.read(&byte, 1))) {
            byte_array_t &byte_array = byte_array_;
            to_byte_array_t output_to(byte_array);
            base64_to_byte_array_t to_output(output_to);
            base64_read_to_byte_array_t output_reader(to_output);
            base64_reader_t reader(output_reader, source);
            
            reader.on_begin(&byte, 1);
            do {
                if ((0 > (reader.on_read(&byte, 1)))) {
                    break;
                }
                count += amount;
                amount = source.read(&byte, 1);
            } while (0 < amount);
            reader.on_end(&byte, 1);
            if ((0 < count)) {
                size_t length = 0;
                const byte_t *bytes = 0;
                
                if ((bytes = byte_array.has_elements(length))) {
                    this->out((const char_t*)bytes, length);
                }
            }
        }
        return err;
    }
    virtual int block_base64_decode_source(io::reader& source) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;
        byte_t& byte = this->base64_source(size);
        
        if ((0 < (amount = (ssize_t)size))) {
            ssize_t count = 0;
            
            if (0 < (count = source.read(&byte, size))) {
                to_output_t output_to(*this);
                base64_to_output_t to_output(output_to);
                base64_read_to_output_t output_reader(to_output);
                base64_reader_t reader(output_reader, source);
                
                reader.on_begin(&byte, size);
                base64_decode_source(reader, byte, (size_t)count);
                if (amount == count) {
                    do {
                        if (0 < (count = source.read(&byte, size))) {
                            base64_decode_source(reader, byte, (size_t)count);
                        }
                    } while (amount == count);
                }
                reader.on_end(&byte, size);
            }
        }
        return err;
    }
    virtual int base64_decode_source(base64_reader_t& reader, byte_t& byte, size_t size) {
        int err = 0;
        byte_t *bytes = 0;
        if ((bytes = &byte) && (size)) {
            for (; size; ++bytes, --size) {
                reader.on_read(bytes, 1);
            }
        }
        return err;
    }

    /// ...hex_encode_source
    virtual int hex_encode_source(io::reader& source) {
        int err = 0;
        ssize_t amount = 0;
        size_t size = 0;
        byte_t& byte = this->hex_source(size);
        
        if ((0 < (amount = (ssize_t)size))) {
            ssize_t count = 0;
            to_output_t output_to(*this);
            hex_to_output_t to_output(output_to);
            hex_write_to_output_t output_writer(to_output);
            hex_writer_t writer(output_writer, source);
            
            if (0 < (count = source.read(&byte, size))) {
                writer.on_begin(&byte, ((size_t)count));
                if (amount == count) {
                    do {
                        writer.on_read(&byte, ((size_t)count));
                        if (0 < (count = source.read(&byte, size))) {
                            this->outln("\\");
                        }
                    } while (amount == count);
                    if (0 < count) {
                        writer.on_read(&byte, ((size_t)count));
                    }
                } else {
                    if (0 < count) {
                        writer.on_read(&byte, ((size_t)count));
                    }
                }
                writer.on_end(&byte, ((size_t)count));
                this->outln();
            }
        }
        return err;
    }
    /// ...hex_decode_source
    virtual int hex_decode_source(io::reader& source) {
        int err = 0;
        ssize_t count = 0, amount = 0;
        byte_t byte = 0;

        if (0 < (amount = source.read(&byte, 1))) {
            to_output_t output_to(*this);
            hex_to_output_t to_output(output_to);
            hex_read_to_output_t output_reader(to_output);
            hex_reader_t reader(output_reader, source);
            
            reader.on_begin(&byte, 1);
            do {
                if ((0 > (reader.on_read(&byte, 1)))) {
                    break;
                }
                count += amount;
                amount = source.read(&byte, 1);
            } while (0 < amount);
            reader.on_end(&byte, 1);
        }
        return err;
    }

    /// ...source
    virtual byte_t& base64_source(size_t& size) const {
        size = base64_source_size;
        return (byte_t&)base_source_;
    }
    virtual byte_t& hex_source(size_t& size) const {
        size = hex_source_size;
        return (byte_t&)base_source_;
    }

protected:
    enum { 
        hex_source_size = 32,
        base64_source_size = 48,

        base_source_size = base64_source_size
    };
    
    byte_array_t byte_array_;
    byte_t base_source_[base_source_size];
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace code
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HPP
