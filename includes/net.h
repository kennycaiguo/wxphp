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

#ifndef WXPHP_NET_H_GUARD
#define WXPHP_NET_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_net_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxURI_entry;
extern zend_object_handlers wxphp_wxURI_object_handlers;
void php_wxURI_destruction_handler(zend_resource*);

class wxURI_php: public wxURI{
    public:

    wxURI_php():wxURI(){}
    wxURI_php(const wxString& uri):wxURI(uri){}
    wxURI_php(const wxURI& uri):wxURI(uri){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxURI{
    wxURI_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxURI;

void php_wxURI_free(void *object);
zend_object* php_wxURI_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxURI_functions[] = {
    PHP_ME(php_wxURI, BuildURI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, BuildUnescapedURI, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetFragment, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetHostType, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetPassword, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetPort, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxURI, Unescape, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, Resolve, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, IsReference, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasUserInfo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasServer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasScheme, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasQuery, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasPort, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, HasFragment, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetUserInfo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetUser, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetServer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetScheme, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxURI, GetQuery, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxURI * php_wxURI_fetch_object(zend_object *obj) {
    return (zo_wxURI *)(
        (char *)(obj) - XtOffsetOf(zo_wxURI, zo)
    );
}

#define Z_wxURI_P(zv) \
    php_wxURI_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_NET_H_GUARD
