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

#ifndef WXPHP_WEBVIEW_H_GUARD
#define WXPHP_WEBVIEW_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_webview_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxWebViewHistoryItem_entry;
extern zend_object_handlers wxphp_wxWebViewHistoryItem_object_handlers;
void php_wxWebViewHistoryItem_destruction_handler(zend_resource*);

class wxWebViewHistoryItem_php: public wxWebViewHistoryItem{
    public:

    wxWebViewHistoryItem_php(const wxString& url, const wxString& title):wxWebViewHistoryItem(url, title){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxWebViewHistoryItem{
    wxWebViewHistoryItem_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxWebViewHistoryItem;

void php_wxWebViewHistoryItem_free(void *object);
zend_object* php_wxWebViewHistoryItem_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWebViewHistoryItem_functions[] = {
    PHP_ME(php_wxWebViewHistoryItem, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxWebViewHistoryItem, GetUrl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxWebViewHistoryItem, GetTitle, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxWebViewHistoryItem * php_wxWebViewHistoryItem_fetch_object(zend_object *obj) {
    return (zo_wxWebViewHistoryItem *)(
        (char *)(obj) - XtOffsetOf(zo_wxWebViewHistoryItem, zo)
    );
}

#define Z_wxWebViewHistoryItem_P(zv) \
    php_wxWebViewHistoryItem_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxWebViewHandler_entry;
extern zend_object_handlers wxphp_wxWebViewHandler_object_handlers;
void php_wxWebViewHandler_destruction_handler(zend_resource*);

class wxWebViewHandler_php: public wxWebViewHandler{
    public:

    wxWebViewHandler_php(const wxString& scheme):wxWebViewHandler(scheme){}
    
    wxFSFile* GetFile(const wxString& uri);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxWebViewHandler{
    wxWebViewHandler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxWebViewHandler;

void php_wxWebViewHandler_free(void *object);
zend_object* php_wxWebViewHandler_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWebViewHandler_functions[] = {
    PHP_ME(php_wxWebViewHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxWebViewHandler, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxWebViewHandler * php_wxWebViewHandler_fetch_object(zend_object *obj) {
    return (zo_wxWebViewHandler *)(
        (char *)(obj) - XtOffsetOf(zo_wxWebViewHandler, zo)
    );
}

#define Z_wxWebViewHandler_P(zv) \
    php_wxWebViewHandler_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxWebViewArchiveHandler_entry;
extern zend_object_handlers wxphp_wxWebViewArchiveHandler_object_handlers;
void php_wxWebViewArchiveHandler_destruction_handler(zend_resource*);

class wxWebViewArchiveHandler_php: public wxWebViewArchiveHandler{
    public:

    wxWebViewArchiveHandler_php(const wxString& scheme):wxWebViewArchiveHandler(scheme){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxWebViewArchiveHandler{
    wxWebViewArchiveHandler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxWebViewArchiveHandler;

void php_wxWebViewArchiveHandler_free(void *object);
zend_object* php_wxWebViewArchiveHandler_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWebViewArchiveHandler_functions[] = {
    PHP_ME(php_wxWebViewArchiveHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxWebViewArchiveHandler, GetFile, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxWebViewArchiveHandler * php_wxWebViewArchiveHandler_fetch_object(zend_object *obj) {
    return (zo_wxWebViewArchiveHandler *)(
        (char *)(obj) - XtOffsetOf(zo_wxWebViewArchiveHandler, zo)
    );
}

#define Z_wxWebViewArchiveHandler_P(zv) \
    php_wxWebViewArchiveHandler_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_WEBVIEW_H_GUARD
