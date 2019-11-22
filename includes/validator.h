/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_VALIDATOR_H_GUARD
#define WXPHP_VALIDATOR_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_validator_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxGenericValidator_entry;
extern zend_object_handlers wxphp_wxGenericValidator_object_handlers;
void php_wxGenericValidator_destruction_handler(zend_resource*);

class wxGenericValidator_php: public wxGenericValidator{
    public:

    wxGenericValidator_php(bool* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(wxString* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(int* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(wxDateTime* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(wxFileName* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(float* valPtr):wxGenericValidator(valPtr){}
    wxGenericValidator_php(double* valPtr):wxGenericValidator(valPtr){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxGenericValidator{
    wxGenericValidator_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxGenericValidator;

void php_wxGenericValidator_free(void *object);
zend_object* php_wxGenericValidator_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxGenericValidator_functions[] = {
    PHP_ME(php_wxGenericValidator, CloneMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxGenericValidator, TransferFromWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxGenericValidator, TransferToWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxGenericValidator, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxGenericValidator * php_wxGenericValidator_fetch_object(zend_object *obj) {
    return (zo_wxGenericValidator *)(
        (char *)(obj) - XtOffsetOf(zo_wxGenericValidator, zo)
    );
}

#define Z_wxGenericValidator_P(zv) \
    php_wxGenericValidator_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxValidator_entry;
extern zend_object_handlers wxphp_wxValidator_object_handlers;
void php_wxValidator_destruction_handler(zend_resource*);

class wxValidator_php: public wxValidator{
    public:

    wxValidator_php():wxValidator(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxValidator{
    wxValidator_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxValidator;

void php_wxValidator_free(void *object);
zend_object* php_wxValidator_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxValidator_functions[] = {
    PHP_ME(php_wxValidator, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxValidator, Validate, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, TransferToWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, TransferFromWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, SetWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, GetWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, SuppressBellOnError, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxValidator, CloneMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxValidator * php_wxValidator_fetch_object(zend_object *obj) {
    return (zo_wxValidator *)(
        (char *)(obj) - XtOffsetOf(zo_wxValidator, zo)
    );
}

#define Z_wxValidator_P(zv) \
    php_wxValidator_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxTextValidator_entry;
extern zend_object_handlers wxphp_wxTextValidator_object_handlers;
void php_wxTextValidator_destruction_handler(zend_resource*);

class wxTextValidator_php: public wxTextValidator{
    public:

    wxTextValidator_php(long style=wxFILTER_NONE, wxString* valPtr=NULL):wxTextValidator(style, valPtr){}
    
    wxString IsValid(const wxString& val) const;
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxTextValidator{
    wxTextValidator_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxTextValidator;

void php_wxTextValidator_free(void *object);
zend_object* php_wxTextValidator_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTextValidator_functions[] = {
    PHP_ME(php_wxTextValidator, CloneMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, GetExcludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, GetIncludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, GetStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, HasFlag, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, SetCharExcludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, SetCharIncludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, SetExcludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, SetIncludes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, SetStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, TransferFromWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, TransferToWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, Validate, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTextValidator, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxTextValidator * php_wxTextValidator_fetch_object(zend_object *obj) {
    return (zo_wxTextValidator *)(
        (char *)(obj) - XtOffsetOf(zo_wxTextValidator, zo)
    );
}

#define Z_wxTextValidator_P(zv) \
    php_wxTextValidator_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_VALIDATOR_H_GUARD
