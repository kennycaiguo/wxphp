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

#ifndef WXPHP_PICKERS_H_GUARD
#define WXPHP_PICKERS_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_pickers_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxColourPickerCtrl_entry;
extern zend_object_handlers wxphp_wxColourPickerCtrl_object_handlers;
void php_wxColourPickerCtrl_destruction_handler(zend_resource*);

class wxColourPickerCtrl_php: public wxColourPickerCtrl{
    public:

    wxColourPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxColour& colour=*wxBLACK, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxCLRP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxColourPickerCtrlNameStr):wxColourPickerCtrl(parent, id, colour, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxColourPickerCtrl{
    wxColourPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxColourPickerCtrl;

void php_wxColourPickerCtrl_free(void *object);
zend_object* php_wxColourPickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxColourPickerCtrl_functions[] = {
    PHP_ME(php_wxColourPickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxColourPickerCtrl, GetColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxColourPickerCtrl, SetColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxColourPickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxColourPickerCtrl * php_wxColourPickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxColourPickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxColourPickerCtrl, zo)
    );
}

#define Z_wxColourPickerCtrl_P(zv) \
    php_wxColourPickerCtrl_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxDatePickerCtrl_entry;
extern zend_object_handlers wxphp_wxDatePickerCtrl_object_handlers;
void php_wxDatePickerCtrl_destruction_handler(zend_resource*);

class wxDatePickerCtrl_php: public wxDatePickerCtrl{
    public:

    wxDatePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxDateTime& dt=wxDefaultDateTime, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDP_DEFAULT|wxDP_SHOWCENTURY, const wxValidator& validator=wxDefaultValidator, const wxString& name="datectrl"):wxDatePickerCtrl(parent, id, dt, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDatePickerCtrl{
    wxDatePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDatePickerCtrl;

void php_wxDatePickerCtrl_free(void *object);
zend_object* php_wxDatePickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDatePickerCtrl_functions[] = {
    PHP_ME(php_wxDatePickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxDatePickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDatePickerCtrl, SetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDatePickerCtrl, SetRange, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDatePickerCtrl, GetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDatePickerCtrl, GetRange, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxDatePickerCtrl * php_wxDatePickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxDatePickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxDatePickerCtrl, zo)
    );
}

#define Z_wxDatePickerCtrl_P(zv) \
    php_wxDatePickerCtrl_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFilePickerCtrl_entry;
extern zend_object_handlers wxphp_wxFilePickerCtrl_object_handlers;
void php_wxFilePickerCtrl_destruction_handler(zend_resource*);

class wxFilePickerCtrl_php: public wxFilePickerCtrl{
    public:

    wxFilePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxString& path=wxEmptyString, const wxString& message=wxFileSelectorPromptStr, const wxString& wildcard=wxFileSelectorDefaultWildcardStr, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxFLP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxFilePickerCtrlNameStr):wxFilePickerCtrl(parent, id, path, message, wildcard, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFilePickerCtrl{
    wxFilePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFilePickerCtrl;

void php_wxFilePickerCtrl_free(void *object);
zend_object* php_wxFilePickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFilePickerCtrl_functions[] = {
    PHP_ME(php_wxFilePickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFilePickerCtrl, GetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFilePickerCtrl, SetFileName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFilePickerCtrl, SetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFilePickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxFilePickerCtrl, GetFileName, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxFilePickerCtrl * php_wxFilePickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxFilePickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxFilePickerCtrl, zo)
    );
}

#define Z_wxFilePickerCtrl_P(zv) \
    php_wxFilePickerCtrl_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxDirPickerCtrl_entry;
extern zend_object_handlers wxphp_wxDirPickerCtrl_object_handlers;
void php_wxDirPickerCtrl_destruction_handler(zend_resource*);

class wxDirPickerCtrl_php: public wxDirPickerCtrl{
    public:

    wxDirPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxString& path=wxEmptyString, const wxString& message=wxDirSelectorPromptStr, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDIRP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxDirPickerCtrlNameStr):wxDirPickerCtrl(parent, id, path, message, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDirPickerCtrl{
    wxDirPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDirPickerCtrl;

void php_wxDirPickerCtrl_free(void *object);
zend_object* php_wxDirPickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDirPickerCtrl_functions[] = {
    PHP_ME(php_wxDirPickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDirPickerCtrl, GetDirName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDirPickerCtrl, GetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDirPickerCtrl, SetDirName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDirPickerCtrl, SetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxDirPickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxDirPickerCtrl * php_wxDirPickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxDirPickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxDirPickerCtrl, zo)
    );
}

#define Z_wxDirPickerCtrl_P(zv) \
    php_wxDirPickerCtrl_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFontPickerCtrl_entry;
extern zend_object_handlers wxphp_wxFontPickerCtrl_object_handlers;
void php_wxFontPickerCtrl_destruction_handler(zend_resource*);

class wxFontPickerCtrl_php: public wxFontPickerCtrl{
    public:

    wxFontPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxFont& font=wxNullFont, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxFNTP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxFontPickerCtrlNameStr):wxFontPickerCtrl(parent, id, font, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFontPickerCtrl{
    wxFontPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFontPickerCtrl;

void php_wxFontPickerCtrl_free(void *object);
zend_object* php_wxFontPickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFontPickerCtrl_functions[] = {
    PHP_ME(php_wxFontPickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFontPickerCtrl, GetMaxPointSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFontPickerCtrl, GetSelectedFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFontPickerCtrl, SetMaxPointSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFontPickerCtrl, SetSelectedFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFontPickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFontPickerCtrl * php_wxFontPickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxFontPickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxFontPickerCtrl, zo)
    );
}

#define Z_wxFontPickerCtrl_P(zv) \
    php_wxFontPickerCtrl_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPickerBase_entry;
extern zend_object_handlers wxphp_wxPickerBase_object_handlers;
void php_wxPickerBase_destruction_handler(zend_resource*);

class wxPickerBase_php: public wxPickerBase{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPickerBase{
    wxPickerBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPickerBase;

void php_wxPickerBase_free(void *object);
zend_object* php_wxPickerBase_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPickerBase_functions[] = {
    PHP_ME(php_wxPickerBase, GetInternalMargin, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, GetPickerCtrl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, GetPickerCtrlProportion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, GetTextCtrl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, GetTextCtrlProportion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, HasTextCtrl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, IsPickerCtrlGrowable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, IsTextCtrlGrowable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, SetInternalMargin, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, SetPickerCtrlGrowable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, SetPickerCtrlProportion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, SetTextCtrlGrowable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPickerBase, SetTextCtrlProportion, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxPickerBase * php_wxPickerBase_fetch_object(zend_object *obj) {
    return (zo_wxPickerBase *)(
        (char *)(obj) - XtOffsetOf(zo_wxPickerBase, zo)
    );
}

#define Z_wxPickerBase_P(zv) \
    php_wxPickerBase_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxTimePickerCtrl_entry;
extern zend_object_handlers wxphp_wxTimePickerCtrl_object_handlers;
void php_wxTimePickerCtrl_destruction_handler(zend_resource*);

class wxTimePickerCtrl_php: public wxTimePickerCtrl{
    public:

    wxTimePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxDateTime& dt=wxDefaultDateTime, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxTP_DEFAULT, const wxValidator& validator=wxDefaultValidator, const wxString& name="timectrl"):wxTimePickerCtrl(parent, id, dt, pos, size, style, validator, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxTimePickerCtrl{
    wxTimePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxTimePickerCtrl;

void php_wxTimePickerCtrl_free(void *object);
zend_object* php_wxTimePickerCtrl_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTimePickerCtrl_functions[] = {
    PHP_ME(php_wxTimePickerCtrl, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxTimePickerCtrl, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTimePickerCtrl, GetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxTimePickerCtrl, SetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxTimePickerCtrl * php_wxTimePickerCtrl_fetch_object(zend_object *obj) {
    return (zo_wxTimePickerCtrl *)(
        (char *)(obj) - XtOffsetOf(zo_wxTimePickerCtrl, zo)
    );
}

#define Z_wxTimePickerCtrl_P(zv) \
    php_wxTimePickerCtrl_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_PICKERS_H_GUARD
