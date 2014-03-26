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

#ifndef WXPHP_PICKERS_H_GUARD
#define WXPHP_PICKERS_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_pickers_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxColourPickerCtrl_entry;
void php_wxColourPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxColourPickerCtrl_php: public wxColourPickerCtrl{
	public:
	
	wxColourPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxColour& colour=*wxBLACK, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxCLRP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxColourPickerCtrlNameStr):wxColourPickerCtrl(parent, id, colour, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxColourPickerCtrl 
{
    zend_object zo;
    wxColourPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxColourPickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxColourPickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxDatePickerCtrl_entry;
void php_wxDatePickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxDatePickerCtrl_php: public wxDatePickerCtrl{
	public:
	
	wxDatePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxDateTime& dt=wxDefaultDateTime, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDP_DEFAULT|wxDP_SHOWCENTURY, const wxValidator& validator=wxDefaultValidator, const wxString& name="datectrl"):wxDatePickerCtrl(parent, id, dt, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxDatePickerCtrl 
{
    zend_object zo;
    wxDatePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxDatePickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxDatePickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxFilePickerCtrl_entry;
void php_wxFilePickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFilePickerCtrl_php: public wxFilePickerCtrl{
	public:
	
	wxFilePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxString& path=wxEmptyString, const wxString& message=wxFileSelectorPromptStr, const wxString& wildcard=wxFileSelectorDefaultWildcardStr, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxFLP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxFilePickerCtrlNameStr):wxFilePickerCtrl(parent, id, path, message, wildcard, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFilePickerCtrl 
{
    zend_object zo;
    wxFilePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFilePickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxFilePickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxDirPickerCtrl_entry;
void php_wxDirPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxDirPickerCtrl_php: public wxDirPickerCtrl{
	public:
	
	wxDirPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxString& path=wxEmptyString, const wxString& message=wxDirSelectorPromptStr, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDIRP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxDirPickerCtrlNameStr):wxDirPickerCtrl(parent, id, path, message, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxDirPickerCtrl 
{
    zend_object zo;
    wxDirPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxDirPickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxDirPickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxFontPickerCtrl_entry;
void php_wxFontPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxFontPickerCtrl_php: public wxFontPickerCtrl{
	public:
	
	wxFontPickerCtrl_php(wxWindow* parent, wxWindowID id, const wxFont& font=wxNullFont, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxFNTP_DEFAULT_STYLE, const wxValidator& validator=wxDefaultValidator, const wxString& name=wxFontPickerCtrlNameStr):wxFontPickerCtrl(parent, id, font, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxFontPickerCtrl 
{
    zend_object zo;
    wxFontPickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxFontPickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxFontPickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxPickerBase_entry;
void php_wxPickerBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPickerBase_php: public wxPickerBase{
	public:
	
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxPickerBase 
{
    zend_object zo;
    wxPickerBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxPickerBase_free(void *object TSRMLS_DC);
zend_object_value php_wxPickerBase_new(zend_class_entry *class_type TSRMLS_DC);
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

extern zend_class_entry* php_wxTimePickerCtrl_entry;
void php_wxTimePickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxTimePickerCtrl_php: public wxTimePickerCtrl{
	public:
	
	wxTimePickerCtrl_php(wxWindow* parent, wxWindowID id, const wxDateTime& dt=wxDefaultDateTime, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxTP_DEFAULT, const wxValidator& validator=wxDefaultValidator, const wxString& name="timectrl"):wxTimePickerCtrl(parent, id, dt, pos, size, style, validator, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxTimePickerCtrl 
{
    zend_object zo;
    wxTimePickerCtrl_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxTimePickerCtrl_free(void *object TSRMLS_DC);
zend_object_value php_wxTimePickerCtrl_new(zend_class_entry *class_type TSRMLS_DC);
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

#endif //WXPHP_PICKERS_H_GUARD
