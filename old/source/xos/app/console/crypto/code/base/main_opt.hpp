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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 7/29/2022, 7/31/2022
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPT_HPP

#include "xos/app/console/crypto/base/main.hpp"
#include "xos/io/reader.hpp"

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPT "encode"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTUSE "encode plain text"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_S "e"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPT "decode"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG ""
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTUSE "decode code text"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_S "d"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_C 'd'
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPT "plain"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTUSE "plain text"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_S "p::"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_C 'p'
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPT "code"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG "[string]"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTUSE "encoded text"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_S "c::"
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_C 'c'
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTION \
   {XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_S \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_S \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_S \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_S \

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTION \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTION \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTION \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_OPTIONS_CHARS

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HEX_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_HEX_OPTIONS_CHARS

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_HEX_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_HEX_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_BASE64_OPTIONS_CHARS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_BASE64_OPTIONS_CHARS

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_BASE64_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_CRYPTO_BASE_MAIN_BASE_BASE64_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace crypto {
namespace code {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::crypto::base::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            const char_t* arg = 0;
            if ((argc > optind) && (arg = argv[optind]) && (arg[0])) {
                err = this->all_code_source_run(argc, argv, env);
            } else {
                err = extends::run(argc, argv, env);
            }
        }
        return err;
    }

    /// ...code_source_run
    int (derives::*code_source_run_)(int argc, char_t** argv, char_t** env);
    virtual int code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (code_source_run_) {
            err = (this->*code_source_run_)(argc, argv, env);
        } else {
            err = default_code_source_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_encode_source_run(argc, argv, env);
        return err;
    }
    virtual int before_code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_code_source_run(argc, argv, env))) {
            int err2 = 0;
            err = code_source_run(argc, argv, env);
            if ((err2 = after_code_source_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_code_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_code_source_run;
        return err;
    }

    /// ...encode_source_run
    int (derives::*encode_source_run_)(int argc, char_t** argv, char_t** env);
    virtual int encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (encode_source_run_) {
            err = (this->*encode_source_run_)(argc, argv, env);
        } else {
            err = default_encode_source_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((argc > optind) && (arg = argv[optind]) && (arg[0])) {
            err = all_encode_source(arg);
        } else {
        }
        return err;
    }
    virtual int before_encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_encode_source_run(argc, argv, env))) {
            int err2 = 0;
            err = encode_source_run(argc, argv, env);
            if ((err2 = after_encode_source_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_encode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        code_source_run_ = &derives::all_encode_source_run;
        return err;
    }

    /// ...decode_source_run
    int (derives::*decode_source_run_)(int argc, char_t** argv, char_t** env);
    virtual int decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (decode_source_run_) {
            err = (this->*decode_source_run_)(argc, argv, env);
        } else {
            err = default_decode_source_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t* arg = 0;
        if ((argc > optind) && (arg = argv[optind]) && (arg[0])) {
            err = all_decode_source(arg);
        } else {
        }
        return err;
    }
    virtual int before_decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_decode_source_run(argc, argv, env))) {
            int err2 = 0;
            err = decode_source_run(argc, argv, env);
            if ((err2 = after_decode_source_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_decode_source_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        code_source_run_ = &derives::all_decode_source_run;
        return err;
    }

    /// 
    /// ...code_source
    /// ...
    /// ...encode_source
    virtual int encode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int before_encode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int after_encode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int all_encode_source(const char_t* location) {
        int err = 0;
        if (!(err = before_encode_source(location))) {
            int err2 = 0;
            err = encode_source(location);
            if ((err2 = after_encode_source(location))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...decode_source
    virtual int decode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int before_decode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int after_decode_source(const char_t* location) {
        int err = 0;
        return err;
    }
    virtual int all_decode_source(const char_t* location) {
        int err = 0;
        if (!(err = before_decode_source(location))) {
            int err2 = 0;
            err = decode_source(location);
            if ((err2 = after_decode_source(location))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...
    /// ...code_source
    /// 

    /// 
    /// ...code_source
    /// ...
    /// ...encode_source
    int (derives::*encode_source_)(io::reader& source);
    virtual int encode_source(io::reader& source) {
        int err = 0;
        if (encode_source_) {
            err = (this->*encode_source_)(source);
        } else {
            err = default_encode_source(source);
        }
        return err;
    }
    virtual int default_encode_source(io::reader& source) {
        int err = 0;
        ///err = all_base64_encode_source(source);
        return err;
    }
    virtual int before_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_encode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_encode_source(source))) {
            int err2 = 0;
            err = encode_source(source);
            if ((err2 = after_encode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...decode_source
    int (derives::*decode_source_)(io::reader& source);
    virtual int decode_source(io::reader& source) {
        int err = 0;
        if (decode_source_) {
            err = (this->*decode_source_)(source);
        } else {
            err = default_decode_source(source);
        }
        return err;
    }
    virtual int default_decode_source(io::reader& source) {
        int err = 0;
        ///err = all_base64_decode_source(source);
        return err;
    }
    virtual int before_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_decode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_decode_source(source))) {
            int err2 = 0;
            err = decode_source(source);
            if ((err2 = after_decode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...
    /// ...code_source
    /// 

    /// 
    /// ...base64...code_source
    /// ...
    /// ...base64_encode_source
    virtual int base64_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int before_base64_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_base64_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_base64_encode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_base64_encode_source(source))) {
            int err2 = 0;
            err = base64_encode_source(source);
            if ((err2 = after_base64_encode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_base64_encode_source(int argc, char_t** argv, char_t** env) {
        int err = 0;
        encode_source_ = &derives::all_base64_encode_source;
        return err;
    }
    /// ...base64_decode_source
    virtual int base64_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int before_base64_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_base64_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_base64_decode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_base64_decode_source(source))) {
            int err2 = 0;
            err = base64_decode_source(source);
            if ((err2 = after_base64_decode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_base64_decode_source(int argc, char_t** argv, char_t** env) {
        int err = 0;
        decode_source_ = &derives::all_base64_decode_source;
        return err;
    }
    /// ...
    /// ...base64...code_source
    /// 

    /// 
    /// ...hex...code_source
    /// ...
    /// ...hex_encode_source
    virtual int hex_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int before_hex_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_hex_encode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_hex_encode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_hex_encode_source(source))) {
            int err2 = 0;
            err = hex_encode_source(source);
            if ((err2 = after_hex_encode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_hex_encode_source(int argc, char_t** argv, char_t** env) {
        int err = 0;
        encode_source_ = &derives::all_hex_encode_source;
        return err;
    }
    /// ...hex_decode_source
    virtual int hex_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int before_hex_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int after_hex_decode_source(io::reader& source) {
        int err = 0;
        return err;
    }
    virtual int all_hex_decode_source(io::reader& source) {
        int err = 0;
        if (!(err = before_hex_decode_source(source))) {
            int err2 = 0;
            err = hex_decode_source(source);
            if ((err2 = after_hex_decode_source(source))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_hex_decode_source(int argc, char_t** argv, char_t** env) {
        int err = 0;
        decode_source_ = &derives::all_hex_decode_source;
        return err;
    }
    /// ...
    /// ...hex...code_source
    /// 

    /// ...option...
    virtual int on_set_base64_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_base64_encode_source(argc, argv, env))) {
            if (!(err = set_base64_decode_source(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int on_set_Ox_hex_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_hex_encode_source(argc, argv, env))) {
            if (!(err = set_hex_decode_source(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int on_set_upper_hex_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_hex_encode_source(argc, argv, env))) {
            if (!(err = set_hex_decode_source(argc, argv, env))) {
            }
        }
        return err;
    }
    virtual int on_set_lower_hex_option
    (int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_hex_encode_source(argc, argv, env))) {
            if (!(err = set_hex_decode_source(argc, argv, env))) {
            }
        }
        return err;
    }

    /// ...option...
    virtual int on_encode_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_encode_source_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* encode_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTARG;
        return chars;
    }
    virtual int on_decode_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_decode_source_run(argc, argv, env))) {
        }
        return err;
    }
    virtual const char_t* decode_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_plain_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* plain_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTARG;
        return chars;
    }
    virtual int on_code_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        return err;
    }
    virtual const char_t* code_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTUSE;
        optarg = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_C:
            err = this->on_encode_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_C:
            err = this->on_decode_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_C:
            err = this->on_plain_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_C:
            err = this->on_code_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ENCODE_OPTVAL_C:
            chars = this->encode_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_DECODE_OPTVAL_C:
            chars = this->decode_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_PLAIN_OPTVAL_C:
            chars = this->plain_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_CODE_OPTVAL_C:
            chars = this->code_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace code
} /// namespace crypto
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_CRYPTO_CODE_BASE_MAIN_OPT_HPP
