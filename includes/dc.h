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

#ifndef WXPHP_DC_H_GUARD
#define WXPHP_DC_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_dc_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxDC_entry;
void php_wxDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxDC_php: public wxDC{
	public:
	
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxDC 
{
    zend_object zo;
    wxDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxDC_free(void *object TSRMLS_DC);
zend_object_value php_wxDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDC_functions[] = {
	PHP_ME(php_wxDC, StartPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, StartDoc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetUserScale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetTextForeground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetTextBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, CalcBoundingBox, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, CanUseTransformMatrix, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, CopyAttributes, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, CrossHair, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DestroyClippingRegion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DeviceToLogicalX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DeviceToLogicalXRel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DeviceToLogicalY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DeviceToLogicalYRel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawArc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawCheckMark, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawCircle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawEllipse, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawEllipticArc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawLine, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawPoint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawRectangle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawRotatedText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawRoundedRectangle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawSpline, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, DrawText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, EndDoc, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, EndPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, FloodFill, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetBackgroundMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetBrush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetCharHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetCharWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetClippingBox, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetDepth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetDeviceOrigin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetLogicalFunction, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetLogicalOrigin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetLogicalScale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetMapMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetMultiLineTextExtent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetPPI, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetPen, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetPixel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetSizeMM, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetTextBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetTextExtent, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetTextForeground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GetUserScale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GradientFillConcentric, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, GradientFillLinear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, LogicalToDeviceX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, LogicalToDeviceY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, LogicalToDeviceXRel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, LogicalToDeviceYRel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, MaxX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, MaxY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, MinX, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, MinY, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, ResetBoundingBox, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, ResetTransformMatrix, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetAxisOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetBackgroundMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetBrush, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetClippingRegion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetDeviceClippingRegion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetDeviceOrigin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetLayoutDirection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetLogicalFunction, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetLogicalOrigin, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetLogicalScale, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetMapMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetPalette, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, SetPen, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, StretchBlit, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDC, Blit, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxBufferedDC_entry;
void php_wxBufferedDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxBufferedDC_php: public wxBufferedDC{
	public:
	
	wxBufferedDC_php():wxBufferedDC(){}
	wxBufferedDC_php(wxDC* dc, const wxSize& area, int style=wxBUFFER_CLIENT_AREA):wxBufferedDC(dc, area, style){}
	wxBufferedDC_php(wxDC* dc, wxBitmap& buffer=wxNullBitmap, int style=wxBUFFER_CLIENT_AREA):wxBufferedDC(dc, buffer, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxBufferedDC 
{
    zend_object zo;
    wxBufferedDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxBufferedDC_free(void *object TSRMLS_DC);
zend_object_value php_wxBufferedDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBufferedDC_functions[] = {
	PHP_ME(php_wxBufferedDC, Init, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxBufferedDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxAutoBufferedPaintDC_entry;
void php_wxAutoBufferedPaintDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxAutoBufferedPaintDC_php: public wxAutoBufferedPaintDC{
	public:
	
	wxAutoBufferedPaintDC_php(wxWindow* window):wxAutoBufferedPaintDC(window){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxAutoBufferedPaintDC 
{
    zend_object zo;
    wxAutoBufferedPaintDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxAutoBufferedPaintDC_free(void *object TSRMLS_DC);
zend_object_value php_wxAutoBufferedPaintDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAutoBufferedPaintDC_functions[] = {
	PHP_ME(php_wxAutoBufferedPaintDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxBufferedPaintDC_entry;
void php_wxBufferedPaintDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxBufferedPaintDC_php: public wxBufferedPaintDC{
	public:
	
	wxBufferedPaintDC_php(wxWindow* window, wxBitmap& buffer, int style=wxBUFFER_CLIENT_AREA):wxBufferedPaintDC(window, buffer, style){}
	wxBufferedPaintDC_php(wxWindow* window, int style=wxBUFFER_CLIENT_AREA):wxBufferedPaintDC(window, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxBufferedPaintDC 
{
    zend_object zo;
    wxBufferedPaintDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxBufferedPaintDC_free(void *object TSRMLS_DC);
zend_object_value php_wxBufferedPaintDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBufferedPaintDC_functions[] = {
	PHP_ME(php_wxBufferedPaintDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxPaintDC_entry;
void php_wxPaintDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPaintDC_php: public wxPaintDC{
	public:
	
	wxPaintDC_php(wxWindow* window):wxPaintDC(window){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxPaintDC 
{
    zend_object zo;
    wxPaintDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxPaintDC_free(void *object TSRMLS_DC);
zend_object_value php_wxPaintDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPaintDC_functions[] = {
	PHP_ME(php_wxPaintDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxClientDC_entry;
void php_wxClientDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxClientDC_php: public wxClientDC{
	public:
	
	wxClientDC_php(wxWindow* window):wxClientDC(window){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxClientDC 
{
    zend_object zo;
    wxClientDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxClientDC_free(void *object TSRMLS_DC);
zend_object_value php_wxClientDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxClientDC_functions[] = {
	PHP_ME(php_wxClientDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxWindowDC_entry;
void php_wxWindowDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxWindowDC_php: public wxWindowDC{
	public:
	
	wxWindowDC_php(wxWindow* window):wxWindowDC(window){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxWindowDC 
{
    zend_object zo;
    wxWindowDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxWindowDC_free(void *object TSRMLS_DC);
zend_object_value php_wxWindowDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWindowDC_functions[] = {
	PHP_ME(php_wxWindowDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxMemoryDC_entry;
void php_wxMemoryDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMemoryDC_php: public wxMemoryDC{
	public:
	
	wxMemoryDC_php():wxMemoryDC(){}
	wxMemoryDC_php(wxDC* dc):wxMemoryDC(dc){}
	wxMemoryDC_php(wxBitmap& bitmap):wxMemoryDC(bitmap){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxMemoryDC 
{
    zend_object zo;
    wxMemoryDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxMemoryDC_free(void *object TSRMLS_DC);
zend_object_value php_wxMemoryDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMemoryDC_functions[] = {
	PHP_ME(php_wxMemoryDC, SelectObject, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMemoryDC, SelectObjectAsSource, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMemoryDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxMirrorDC_entry;
void php_wxMirrorDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxMirrorDC_php: public wxMirrorDC{
	public:
	
	wxMirrorDC_php(wxDC& dc, bool mirror):wxMirrorDC(dc, mirror){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxMirrorDC 
{
    zend_object zo;
    wxMirrorDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxMirrorDC_free(void *object TSRMLS_DC);
zend_object_value php_wxMirrorDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMirrorDC_functions[] = {
	PHP_ME(php_wxMirrorDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxPostScriptDC_entry;
void php_wxPostScriptDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxPostScriptDC_php: public wxPostScriptDC{
	public:
	
	wxPostScriptDC_php():wxPostScriptDC(){}
	wxPostScriptDC_php(const wxPrintData& printData):wxPostScriptDC(printData){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxPostScriptDC 
{
    zend_object zo;
    wxPostScriptDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxPostScriptDC_free(void *object TSRMLS_DC);
zend_object_value php_wxPostScriptDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPostScriptDC_functions[] = {
	PHP_ME(php_wxPostScriptDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

extern zend_class_entry* php_wxScreenDC_entry;
void php_wxScreenDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

class wxScreenDC_php: public wxScreenDC{
	public:
	
	wxScreenDC_php():wxScreenDC(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_wxScreenDC 
{
    zend_object zo;
    wxScreenDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxScreenDC_free(void *object TSRMLS_DC);
zend_object_value php_wxScreenDC_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxScreenDC_functions[] = {
	PHP_ME(php_wxScreenDC, EndDrawingOnTop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxScreenDC, StartDrawingOnTop, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxScreenDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif

#endif //WXPHP_DC_H_GUARD
