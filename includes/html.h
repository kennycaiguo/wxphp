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

#ifndef WXPHP_HTML_H_GUARD
#define WXPHP_HTML_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_html_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxHtmlRenderingStyle_entry;
extern zend_object_handlers wxphp_wxHtmlRenderingStyle_object_handlers;
void php_wxHtmlRenderingStyle_destruction_handler(zend_resource*);

class wxHtmlRenderingStyle_php: public wxHtmlRenderingStyle{
    public:

    
    wxColour GetSelectedTextBgColour(const wxColour& clr);
    wxColour GetSelectedTextColour(const wxColour& clr);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlRenderingStyle{
    wxHtmlRenderingStyle_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlRenderingStyle;

void php_wxHtmlRenderingStyle_free(void *object);
zend_object* php_wxHtmlRenderingStyle_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlRenderingStyle_functions[] = {
    PHP_FE_END
};
#endif


static inline zo_wxHtmlRenderingStyle * php_wxHtmlRenderingStyle_fetch_object(zend_object *obj) {
    return (zo_wxHtmlRenderingStyle *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlRenderingStyle, zo)
    );
}

#define Z_wxHtmlRenderingStyle_P(zv) \
    php_wxHtmlRenderingStyle_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlRenderingInfo_entry;
extern zend_object_handlers wxphp_wxHtmlRenderingInfo_object_handlers;
void php_wxHtmlRenderingInfo_destruction_handler(zend_resource*);

class wxHtmlRenderingInfo_php: public wxHtmlRenderingInfo{
    public:

    wxHtmlRenderingInfo_php():wxHtmlRenderingInfo(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlRenderingInfo{
    wxHtmlRenderingInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlRenderingInfo;

void php_wxHtmlRenderingInfo_free(void *object);
zend_object* php_wxHtmlRenderingInfo_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlRenderingInfo_functions[] = {
    PHP_ME(php_wxHtmlRenderingInfo, GetStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlRenderingInfo, SetStyle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlRenderingInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlRenderingInfo * php_wxHtmlRenderingInfo_fetch_object(zend_object *obj) {
    return (zo_wxHtmlRenderingInfo *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlRenderingInfo, zo)
    );
}

#define Z_wxHtmlRenderingInfo_P(zv) \
    php_wxHtmlRenderingInfo_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlCell_entry;
extern zend_object_handlers wxphp_wxHtmlCell_object_handlers;
void php_wxHtmlCell_destruction_handler(zend_resource*);

class wxHtmlCell_php: public wxHtmlCell{
    public:

    wxHtmlCell_php():wxHtmlCell(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlCell{
    wxHtmlCell_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlCell;

void php_wxHtmlCell_free(void *object);
zend_object* php_wxHtmlCell_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlCell_functions[] = {
    PHP_ME(php_wxHtmlCell, GetDescent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetFirstChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetId, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetLink, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetPosX, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetPosY, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, GetWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, Layout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, SetId, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, SetLink, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, SetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, SetParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, SetPos, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCell, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlCell, Find, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlCell * php_wxHtmlCell_fetch_object(zend_object *obj) {
    return (zo_wxHtmlCell *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlCell, zo)
    );
}

#define Z_wxHtmlCell_P(zv) \
    php_wxHtmlCell_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlContainerCell_entry;
extern zend_object_handlers wxphp_wxHtmlContainerCell_object_handlers;
void php_wxHtmlContainerCell_destruction_handler(zend_resource*);

class wxHtmlContainerCell_php: public wxHtmlContainerCell{
    public:

    wxHtmlContainerCell_php(wxHtmlContainerCell* parent):wxHtmlContainerCell(parent){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlContainerCell{
    wxHtmlContainerCell_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlContainerCell;

void php_wxHtmlContainerCell_free(void *object);
zend_object* php_wxHtmlContainerCell_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlContainerCell_functions[] = {
    PHP_ME(php_wxHtmlContainerCell, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlContainerCell, SetWidthFloat, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetMinHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetIndent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetBorder, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetAlignVer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetAlignHor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, SetAlign, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, InsertCell, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, GetIndentUnits, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, GetIndent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, GetBackgroundColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, GetAlignVer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlContainerCell, GetAlignHor, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlContainerCell * php_wxHtmlContainerCell_fetch_object(zend_object *obj) {
    return (zo_wxHtmlContainerCell *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlContainerCell, zo)
    );
}

#define Z_wxHtmlContainerCell_P(zv) \
    php_wxHtmlContainerCell_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlLinkInfo_entry;
extern zend_object_handlers wxphp_wxHtmlLinkInfo_object_handlers;
void php_wxHtmlLinkInfo_destruction_handler(zend_resource*);

class wxHtmlLinkInfo_php: public wxHtmlLinkInfo{
    public:

    wxHtmlLinkInfo_php():wxHtmlLinkInfo(){}
    wxHtmlLinkInfo_php(const wxString& href, const wxString& target=wxEmptyString):wxHtmlLinkInfo(href, target){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlLinkInfo{
    wxHtmlLinkInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlLinkInfo;

void php_wxHtmlLinkInfo_free(void *object);
zend_object* php_wxHtmlLinkInfo_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlLinkInfo_functions[] = {
    PHP_ME(php_wxHtmlLinkInfo, GetEvent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlLinkInfo, GetHref, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlLinkInfo, GetHtmlCell, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlLinkInfo, GetTarget, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlLinkInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlLinkInfo * php_wxHtmlLinkInfo_fetch_object(zend_object *obj) {
    return (zo_wxHtmlLinkInfo *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlLinkInfo, zo)
    );
}

#define Z_wxHtmlLinkInfo_P(zv) \
    php_wxHtmlLinkInfo_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlColourCell_entry;
extern zend_object_handlers wxphp_wxHtmlColourCell_object_handlers;
void php_wxHtmlColourCell_destruction_handler(zend_resource*);

class wxHtmlColourCell_php: public wxHtmlColourCell{
    public:

    wxHtmlColourCell_php(const wxColour& clr, int flags=wxHTML_CLR_FOREGROUND):wxHtmlColourCell(clr, flags){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlColourCell{
    wxHtmlColourCell_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlColourCell;

void php_wxHtmlColourCell_free(void *object);
zend_object* php_wxHtmlColourCell_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlColourCell_functions[] = {
    PHP_ME(php_wxHtmlColourCell, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlColourCell * php_wxHtmlColourCell_fetch_object(zend_object *obj) {
    return (zo_wxHtmlColourCell *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlColourCell, zo)
    );
}

#define Z_wxHtmlColourCell_P(zv) \
    php_wxHtmlColourCell_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlWidgetCell_entry;
extern zend_object_handlers wxphp_wxHtmlWidgetCell_object_handlers;
void php_wxHtmlWidgetCell_destruction_handler(zend_resource*);

class wxHtmlWidgetCell_php: public wxHtmlWidgetCell{
    public:

    wxHtmlWidgetCell_php(wxWindow* wnd, int w=0):wxHtmlWidgetCell(wnd, w){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlWidgetCell{
    wxHtmlWidgetCell_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlWidgetCell;

void php_wxHtmlWidgetCell_free(void *object);
zend_object* php_wxHtmlWidgetCell_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlWidgetCell_functions[] = {
    PHP_ME(php_wxHtmlWidgetCell, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlWidgetCell * php_wxHtmlWidgetCell_fetch_object(zend_object *obj) {
    return (zo_wxHtmlWidgetCell *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlWidgetCell, zo)
    );
}

#define Z_wxHtmlWidgetCell_P(zv) \
    php_wxHtmlWidgetCell_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlFilter_entry;
extern zend_object_handlers wxphp_wxHtmlFilter_object_handlers;
void php_wxHtmlFilter_destruction_handler(zend_resource*);

class wxHtmlFilter_php: public wxHtmlFilter{
    public:

    wxHtmlFilter_php():wxHtmlFilter(){}
    
    bool CanRead(const wxFSFile& file) const;
    wxString ReadFile(const wxFSFile& file) const;
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlFilter{
    wxHtmlFilter_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlFilter;

void php_wxHtmlFilter_free(void *object);
zend_object* php_wxHtmlFilter_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlFilter_functions[] = {
    PHP_ME(php_wxHtmlFilter, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlFilter * php_wxHtmlFilter_fetch_object(zend_object *obj) {
    return (zo_wxHtmlFilter *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlFilter, zo)
    );
}

#define Z_wxHtmlFilter_P(zv) \
    php_wxHtmlFilter_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlTagHandler_entry;
extern zend_object_handlers wxphp_wxHtmlTagHandler_object_handlers;
void php_wxHtmlTagHandler_destruction_handler(zend_resource*);

class wxHtmlTagHandler_php: public wxHtmlTagHandler{
    public:

    wxHtmlTagHandler_php():wxHtmlTagHandler(){}
    
    wxString GetSupportedTags();
    bool HandleTag(const wxHtmlTag& tag);
    
    void InitProperties(){
        properties = new void*[1];

        properties[0] = &m_Parser;
        
    }

    void UninitProperties(){
        delete[] properties;
    }

    void** properties;

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlTagHandler{
    wxHtmlTagHandler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlTagHandler;

void php_wxHtmlTagHandler_free(void *object);
zend_object* php_wxHtmlTagHandler_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlTagHandler_functions[] = {
    PHP_ME(php_wxHtmlTagHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlTagHandler, __get, wxphp_html_get_args, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlTagHandler * php_wxHtmlTagHandler_fetch_object(zend_object *obj) {
    return (zo_wxHtmlTagHandler *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlTagHandler, zo)
    );
}

#define Z_wxHtmlTagHandler_P(zv) \
    php_wxHtmlTagHandler_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlTag_entry;
extern zend_object_handlers wxphp_wxHtmlTag_object_handlers;
void php_wxHtmlTag_destruction_handler(zend_resource*);

class wxHtmlTag_php: public wxHtmlTag{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlTag{
    wxHtmlTag_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlTag;

void php_wxHtmlTag_free(void *object);
zend_object* php_wxHtmlTag_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlTag_functions[] = {
    PHP_ME(php_wxHtmlTag, GetAllParams, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, GetParam, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, GetParamAsColour, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, HasEnding, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, HasParam, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, ParseAsColour, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, ScanParam, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlTag, GetParamAsInt, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlTag * php_wxHtmlTag_fetch_object(zend_object *obj) {
    return (zo_wxHtmlTag *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlTag, zo)
    );
}

#define Z_wxHtmlTag_P(zv) \
    php_wxHtmlTag_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlWindow_entry;
extern zend_object_handlers wxphp_wxHtmlWindow_object_handlers;
void php_wxHtmlWindow_destruction_handler(zend_resource*);

class wxHtmlWindow_php: public wxHtmlWindow{
    public:

    wxHtmlWindow_php():wxHtmlWindow(){}
    wxHtmlWindow_php(wxWindow* parent, wxWindowID id=wxID_ANY, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxHW_DEFAULT_STYLE, const wxString& name="htmlWindow"):wxHtmlWindow(parent, id, pos, size, style, name){}
    
    bool OnCellClicked(wxHtmlCell* cell, wxCoord x, wxCoord y, const wxMouseEvent& event);
    void OnCellMouseHover(wxHtmlCell* cell, wxCoord x, wxCoord y);
    void OnLinkClicked(const wxHtmlLinkInfo& link);
    void OnSetTitle(const wxString& title);
    wxHtmlOpeningStatus OnOpeningURL(wxHtmlURLType type, const wxString& url, wxString* redirect) const;
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlWindow{
    wxHtmlWindow_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlWindow;

void php_wxHtmlWindow_free(void *object);
zend_object* php_wxHtmlWindow_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlWindow_functions[] = {
    PHP_ME(php_wxHtmlWindow, AppendToPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, GetOpenedAnchor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, GetOpenedPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, GetOpenedPageTitle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, GetRelatedFrame, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, HistoryBack, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, HistoryCanBack, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, HistoryCanForward, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, HistoryClear, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, HistoryForward, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, LoadPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, LoadFile, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SelectAll, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SelectLine, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SelectWord, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SelectionToText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetBorders, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetRelatedFrame, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetRelatedStatusBar, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetStandardFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, ToText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, WriteCustomization, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlWindow, GetInternalRepresentation, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWindow, SetFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlWindow * php_wxHtmlWindow_fetch_object(zend_object *obj) {
    return (zo_wxHtmlWindow *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlWindow, zo)
    );
}

#define Z_wxHtmlWindow_P(zv) \
    php_wxHtmlWindow_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlLinkEvent_entry;
extern zend_object_handlers wxphp_wxHtmlLinkEvent_object_handlers;
void php_wxHtmlLinkEvent_destruction_handler(zend_resource*);

class wxHtmlLinkEvent_php: public wxHtmlLinkEvent{
    public:

    wxHtmlLinkEvent_php(int id, const wxHtmlLinkInfo& linkinfo):wxHtmlLinkEvent(id, linkinfo){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlLinkEvent{
    wxHtmlLinkEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlLinkEvent;

void php_wxHtmlLinkEvent_free(void *object);
zend_object* php_wxHtmlLinkEvent_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlLinkEvent_functions[] = {
    PHP_ME(php_wxHtmlLinkEvent, GetLinkInfo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlLinkEvent, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlLinkEvent * php_wxHtmlLinkEvent_fetch_object(zend_object *obj) {
    return (zo_wxHtmlLinkEvent *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlLinkEvent, zo)
    );
}

#define Z_wxHtmlLinkEvent_P(zv) \
    php_wxHtmlLinkEvent_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlCellEvent_entry;
extern zend_object_handlers wxphp_wxHtmlCellEvent_object_handlers;
void php_wxHtmlCellEvent_destruction_handler(zend_resource*);

class wxHtmlCellEvent_php: public wxHtmlCellEvent{
    public:

    wxHtmlCellEvent_php(wxEventType commandType, int id, wxHtmlCell* cell, const wxPoint& point, const wxMouseEvent& ev):wxHtmlCellEvent(commandType, id, cell, point, ev){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlCellEvent{
    wxHtmlCellEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlCellEvent;

void php_wxHtmlCellEvent_free(void *object);
zend_object* php_wxHtmlCellEvent_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlCellEvent_functions[] = {
    PHP_ME(php_wxHtmlCellEvent, GetCell, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCellEvent, GetLinkClicked, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCellEvent, GetPoint, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCellEvent, SetLinkClicked, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlCellEvent, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlCellEvent * php_wxHtmlCellEvent_fetch_object(zend_object *obj) {
    return (zo_wxHtmlCellEvent *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlCellEvent, zo)
    );
}

#define Z_wxHtmlCellEvent_P(zv) \
    php_wxHtmlCellEvent_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlDCRenderer_entry;
extern zend_object_handlers wxphp_wxHtmlDCRenderer_object_handlers;
void php_wxHtmlDCRenderer_destruction_handler(zend_resource*);

class wxHtmlDCRenderer_php: public wxHtmlDCRenderer{
    public:

    wxHtmlDCRenderer_php():wxHtmlDCRenderer(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlDCRenderer{
    wxHtmlDCRenderer_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlDCRenderer;

void php_wxHtmlDCRenderer_free(void *object);
zend_object* php_wxHtmlDCRenderer_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlDCRenderer_functions[] = {
    PHP_ME(php_wxHtmlDCRenderer, GetTotalHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, GetTotalWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlDCRenderer, SetStandardFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, SetSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, SetHtmlText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, SetFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlDCRenderer, SetDC, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlDCRenderer * php_wxHtmlDCRenderer_fetch_object(zend_object *obj) {
    return (zo_wxHtmlDCRenderer *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlDCRenderer, zo)
    );
}

#define Z_wxHtmlDCRenderer_P(zv) \
    php_wxHtmlDCRenderer_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlEasyPrinting_entry;
extern zend_object_handlers wxphp_wxHtmlEasyPrinting_object_handlers;
void php_wxHtmlEasyPrinting_destruction_handler(zend_resource*);

class wxHtmlEasyPrinting_php: public wxHtmlEasyPrinting{
    public:

    wxHtmlEasyPrinting_php(const wxString& name="Printing", wxWindow* parentWindow=NULL):wxHtmlEasyPrinting(name, parentWindow){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlEasyPrinting{
    wxHtmlEasyPrinting_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlEasyPrinting;

void php_wxHtmlEasyPrinting_free(void *object);
zend_object* php_wxHtmlEasyPrinting_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlEasyPrinting_functions[] = {
    PHP_ME(php_wxHtmlEasyPrinting, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, GetPageSetupData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, GetParentWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, GetPrintData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, PageSetup, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, PreviewFile, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, PreviewText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, PrintFile, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, PrintText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, SetFooter, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, SetHeader, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlEasyPrinting, SetStandardFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, SetParentWindow, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, SetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlEasyPrinting, SetFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlEasyPrinting * php_wxHtmlEasyPrinting_fetch_object(zend_object *obj) {
    return (zo_wxHtmlEasyPrinting *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlEasyPrinting, zo)
    );
}

#define Z_wxHtmlEasyPrinting_P(zv) \
    php_wxHtmlEasyPrinting_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlPrintout_entry;
extern zend_object_handlers wxphp_wxHtmlPrintout_object_handlers;
void php_wxHtmlPrintout_destruction_handler(zend_resource*);

class wxHtmlPrintout_php: public wxHtmlPrintout{
    public:

    wxHtmlPrintout_php(const wxString& title="Printout"):wxHtmlPrintout(title){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlPrintout{
    wxHtmlPrintout_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlPrintout;

void php_wxHtmlPrintout_free(void *object);
zend_object* php_wxHtmlPrintout_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlPrintout_functions[] = {
    PHP_ME(php_wxHtmlPrintout, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxHtmlPrintout, SetMargins, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, SetHtmlText, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, SetHtmlFile, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, SetHeader, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, SetFooter, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, SetFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlPrintout, AddFilter, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlPrintout * php_wxHtmlPrintout_fetch_object(zend_object *obj) {
    return (zo_wxHtmlPrintout *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlPrintout, zo)
    );
}

#define Z_wxHtmlPrintout_P(zv) \
    php_wxHtmlPrintout_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlTagsModule_entry;
extern zend_object_handlers wxphp_wxHtmlTagsModule_object_handlers;
void php_wxHtmlTagsModule_destruction_handler(zend_resource*);

class wxHtmlTagsModule_php: public wxHtmlTagsModule{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlTagsModule{
    wxHtmlTagsModule_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlTagsModule;

void php_wxHtmlTagsModule_free(void *object);
zend_object* php_wxHtmlTagsModule_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlTagsModule_functions[] = {
    PHP_ME(php_wxHtmlTagsModule, FillHandlersTable, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlTagsModule * php_wxHtmlTagsModule_fetch_object(zend_object *obj) {
    return (zo_wxHtmlTagsModule *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlTagsModule, zo)
    );
}

#define Z_wxHtmlTagsModule_P(zv) \
    php_wxHtmlTagsModule_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlWinTagHandler_entry;
extern zend_object_handlers wxphp_wxHtmlWinTagHandler_object_handlers;
void php_wxHtmlWinTagHandler_destruction_handler(zend_resource*);

class wxHtmlWinTagHandler_php: public wxHtmlWinTagHandler{
    public:

    
    
    void InitProperties(){
        properties = new void*[1];

        properties[0] = &m_WParser;
        
    }

    void UninitProperties(){
        delete[] properties;
    }

    void** properties;

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlWinTagHandler{
    wxHtmlWinTagHandler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlWinTagHandler;

void php_wxHtmlWinTagHandler_free(void *object);
zend_object* php_wxHtmlWinTagHandler_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlWinTagHandler_functions[] = {
    PHP_FE_END
};
#endif


static inline zo_wxHtmlWinTagHandler * php_wxHtmlWinTagHandler_fetch_object(zend_object *obj) {
    return (zo_wxHtmlWinTagHandler *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlWinTagHandler, zo)
    );
}

#define Z_wxHtmlWinTagHandler_P(zv) \
    php_wxHtmlWinTagHandler_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxHtmlWinParser_entry;
extern zend_object_handlers wxphp_wxHtmlWinParser_object_handlers;
void php_wxHtmlWinParser_destruction_handler(zend_resource*);

class wxHtmlWinParser_php: public wxHtmlWinParser{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxHtmlWinParser{
    wxHtmlWinParser_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxHtmlWinParser;

void php_wxHtmlWinParser_free(void *object);
zend_object* php_wxHtmlWinParser_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxHtmlWinParser_functions[] = {
    PHP_ME(php_wxHtmlWinParser, AddModule, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, CloseContainer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, CreateCurrentFont, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetActualColor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetAlign, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetCharHeight, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetCharWidth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetContainer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetDC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontBold, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontFace, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontFixed, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontItalic, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetFontUnderlined, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetLink, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, GetLinkColor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetActualColor, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetAlign, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetContainer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetDC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, OpenContainer, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontBold, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontFace, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontFixed, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontItalic, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontSize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFontUnderlined, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetFonts, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetLink, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxHtmlWinParser, SetLinkColor, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxHtmlWinParser * php_wxHtmlWinParser_fetch_object(zend_object *obj) {
    return (zo_wxHtmlWinParser *)(
        (char *)(obj) - XtOffsetOf(zo_wxHtmlWinParser, zo)
    );
}

#define Z_wxHtmlWinParser_P(zv) \
    php_wxHtmlWinParser_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_HTML_H_GUARD
