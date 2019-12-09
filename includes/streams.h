/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_STREAMS_H_GUARD
#define WXPHP_STREAMS_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_streams_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxDataOutputStream_entry;
extern zend_object_handlers wxphp_wxDataOutputStream_object_handlers;
void php_wxDataOutputStream_destruction_handler(zend_resource*);

class wxDataOutputStream_php: public wxDataOutputStream{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDataOutputStream{
    wxDataOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDataOutputStream;

void php_wxDataOutputStream_free(void *object);
zend_object* php_wxDataOutputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDataOutputStream_functions[] = {
    PHP_ME(php_wxDataOutputStream, BigEndianOrdered, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataOutputStream, Write16, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataOutputStream, Write32, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataOutputStream, Write8, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataOutputStream, WriteDouble, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataOutputStream, WriteString, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxDataOutputStream * php_wxDataOutputStream_fetch_object(zend_object *obj) {
    return (zo_wxDataOutputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxDataOutputStream, zo)
    );
}

#define Z_wxDataOutputStream_P(zv) \
    php_wxDataOutputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxDataInputStream_entry;
extern zend_object_handlers wxphp_wxDataInputStream_object_handlers;
void php_wxDataInputStream_destruction_handler(zend_resource*);

class wxDataInputStream_php: public wxDataInputStream{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDataInputStream{
    wxDataInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDataInputStream;

void php_wxDataInputStream_free(void *object);
zend_object* php_wxDataInputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDataInputStream_functions[] = {
    PHP_ME(php_wxDataInputStream, ReadString, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataInputStream, ReadDouble, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataInputStream, Read8, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataInputStream, Read32, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataInputStream, Read16, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDataInputStream, BigEndianOrdered, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxDataInputStream * php_wxDataInputStream_fetch_object(zend_object *obj) {
    return (zo_wxDataInputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxDataInputStream, zo)
    );
}

#define Z_wxDataInputStream_P(zv) \
    php_wxDataInputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxStreamBase_entry;
extern zend_object_handlers wxphp_wxStreamBase_object_handlers;
void php_wxStreamBase_destruction_handler(zend_resource*);

class wxStreamBase_php: public wxStreamBase{
    public:

    wxStreamBase_php():wxStreamBase(){}
    
    wxFileOffset OnSysSeek(wxFileOffset pos, wxSeekMode mode);
    wxFileOffset OnSysTell() const;
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxStreamBase{
    wxStreamBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxStreamBase;

void php_wxStreamBase_free(void *object);
zend_object* php_wxStreamBase_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxStreamBase_functions[] = {
    PHP_ME(php_wxStreamBase, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxStreamBase * php_wxStreamBase_fetch_object(zend_object *obj) {
    return (zo_wxStreamBase *)(
        (char *)(obj) - XtOffsetOf(zo_wxStreamBase, zo)
    );
}

#define Z_wxStreamBase_P(zv) \
    php_wxStreamBase_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxOutputStream_entry;
extern zend_object_handlers wxphp_wxOutputStream_object_handlers;
void php_wxOutputStream_destruction_handler(zend_resource*);

class wxOutputStream_php: public wxOutputStream{
    public:

    wxOutputStream_php():wxOutputStream(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxOutputStream{
    wxOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxOutputStream;

void php_wxOutputStream_free(void *object);
zend_object* php_wxOutputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxOutputStream_functions[] = {
    PHP_ME(php_wxOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxOutputStream * php_wxOutputStream_fetch_object(zend_object *obj) {
    return (zo_wxOutputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxOutputStream, zo)
    );
}

#define Z_wxOutputStream_P(zv) \
    php_wxOutputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxInputStream_entry;
extern zend_object_handlers wxphp_wxInputStream_object_handlers;
void php_wxInputStream_destruction_handler(zend_resource*);

class wxInputStream_php: public wxInputStream{
    public:

    wxInputStream_php():wxInputStream(){}
    
    size_t OnSysRead(void* buffer, size_t bufsize);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxInputStream{
    wxInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxInputStream;

void php_wxInputStream_free(void *object);
zend_object* php_wxInputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxInputStream_functions[] = {
    PHP_ME(php_wxInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxInputStream * php_wxInputStream_fetch_object(zend_object *obj) {
    return (zo_wxInputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxInputStream, zo)
    );
}

#define Z_wxInputStream_P(zv) \
    php_wxInputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFFileOutputStream_entry;
extern zend_object_handlers wxphp_wxFFileOutputStream_object_handlers;
void php_wxFFileOutputStream_destruction_handler(zend_resource*);

class wxFFileOutputStream_php: public wxFFileOutputStream{
    public:

    wxFFileOutputStream_php(const wxString& filename, const wxString& mode="wb"):wxFFileOutputStream(filename, mode){}
    wxFFileOutputStream_php(wxFFile& file):wxFFileOutputStream(file){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFFileOutputStream{
    wxFFileOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFFileOutputStream;

void php_wxFFileOutputStream_free(void *object);
zend_object* php_wxFFileOutputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileOutputStream_functions[] = {
    PHP_ME(php_wxFFileOutputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFFileOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFFileOutputStream * php_wxFFileOutputStream_fetch_object(zend_object *obj) {
    return (zo_wxFFileOutputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFFileOutputStream, zo)
    );
}

#define Z_wxFFileOutputStream_P(zv) \
    php_wxFFileOutputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileOutputStream_entry;
extern zend_object_handlers wxphp_wxFileOutputStream_object_handlers;
void php_wxFileOutputStream_destruction_handler(zend_resource*);

class wxFileOutputStream_php: public wxFileOutputStream{
    public:

    wxFileOutputStream_php(const wxString& ofileName):wxFileOutputStream(ofileName){}
    wxFileOutputStream_php(wxFile& file):wxFileOutputStream(file){}
    wxFileOutputStream_php(int fd):wxFileOutputStream(fd){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileOutputStream{
    wxFileOutputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileOutputStream;

void php_wxFileOutputStream_free(void *object);
zend_object* php_wxFileOutputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileOutputStream_functions[] = {
    PHP_ME(php_wxFileOutputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileOutputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFileOutputStream * php_wxFileOutputStream_fetch_object(zend_object *obj) {
    return (zo_wxFileOutputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFileOutputStream, zo)
    );
}

#define Z_wxFileOutputStream_P(zv) \
    php_wxFileOutputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileInputStream_entry;
extern zend_object_handlers wxphp_wxFileInputStream_object_handlers;
void php_wxFileInputStream_destruction_handler(zend_resource*);

class wxFileInputStream_php: public wxFileInputStream{
    public:

    wxFileInputStream_php(const wxString& ifileName):wxFileInputStream(ifileName){}
    wxFileInputStream_php(wxFile& file):wxFileInputStream(file){}
    wxFileInputStream_php(int fd):wxFileInputStream(fd){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileInputStream{
    wxFileInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileInputStream;

void php_wxFileInputStream_free(void *object);
zend_object* php_wxFileInputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileInputStream_functions[] = {
    PHP_ME(php_wxFileInputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFileInputStream * php_wxFileInputStream_fetch_object(zend_object *obj) {
    return (zo_wxFileInputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFileInputStream, zo)
    );
}

#define Z_wxFileInputStream_P(zv) \
    php_wxFileInputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFFileInputStream_entry;
extern zend_object_handlers wxphp_wxFFileInputStream_object_handlers;
void php_wxFFileInputStream_destruction_handler(zend_resource*);

class wxFFileInputStream_php: public wxFFileInputStream{
    public:

    wxFFileInputStream_php(wxFFile& file):wxFFileInputStream(file){}
    wxFFileInputStream_php(const wxString& filename, const wxString& mode="rb"):wxFFileInputStream(filename, mode){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFFileInputStream{
    wxFFileInputStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFFileInputStream;

void php_wxFFileInputStream_free(void *object);
zend_object* php_wxFFileInputStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileInputStream_functions[] = {
    PHP_ME(php_wxFFileInputStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxFFileInputStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxFFileInputStream * php_wxFFileInputStream_fetch_object(zend_object *obj) {
    return (zo_wxFFileInputStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFFileInputStream, zo)
    );
}

#define Z_wxFFileInputStream_P(zv) \
    php_wxFFileInputStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFFileStream_entry;
extern zend_object_handlers wxphp_wxFFileStream_object_handlers;
void php_wxFFileStream_destruction_handler(zend_resource*);

class wxFFileStream_php: public wxFFileStream{
    public:

    wxFFileStream_php(const wxString& iofileName, const wxString& mode="w+b"):wxFFileStream(iofileName, mode){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFFileStream{
    wxFFileStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFFileStream;

void php_wxFFileStream_free(void *object);
zend_object* php_wxFFileStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFFileStream_functions[] = {
    PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFFileStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFFileStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFFileStream * php_wxFFileStream_fetch_object(zend_object *obj) {
    return (zo_wxFFileStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFFileStream, zo)
    );
}

#define Z_wxFFileStream_P(zv) \
    php_wxFFileStream_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileStream_entry;
extern zend_object_handlers wxphp_wxFileStream_object_handlers;
void php_wxFileStream_destruction_handler(zend_resource*);

class wxFileStream_php: public wxFileStream{
    public:

    wxFileStream_php(const wxString& iofileName):wxFileStream(iofileName){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileStream{
    wxFileStream_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileStream;

void php_wxFileStream_free(void *object);
zend_object* php_wxFileStream_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileStream_functions[] = {
    PHP_ME(php_wxStreamBase, Reset, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, IsSeekable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLength, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxStreamBase, GetLastError, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, Write, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, TellO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, SeekO, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, PutC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, Close, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxOutputStream, LastWrite, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Ungetch, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, TellI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, SeekI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Read, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Peek, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, LastRead, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, GetC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, Eof, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxInputStream, CanRead, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileStream, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileStream, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFileStream * php_wxFileStream_fetch_object(zend_object *obj) {
    return (zo_wxFileStream *)(
        (char *)(obj) - XtOffsetOf(zo_wxFileStream, zo)
    );
}

#define Z_wxFileStream_P(zv) \
    php_wxFileStream_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_STREAMS_H_GUARD
