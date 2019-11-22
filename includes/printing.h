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

#ifndef WXPHP_PRINTING_H_GUARD
#define WXPHP_PRINTING_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_printing_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxPrinterDC_entry;
extern zend_object_handlers wxphp_wxPrinterDC_object_handlers;
void php_wxPrinterDC_destruction_handler(zend_resource*);

class wxPrinterDC_php: public wxPrinterDC{
    public:

    wxPrinterDC_php(const wxPrintData& printData):wxPrinterDC(printData){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrinterDC{
    wxPrinterDC_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrinterDC;

void php_wxPrinterDC_free(void *object);
zend_object* php_wxPrinterDC_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrinterDC_functions[] = {
    PHP_ME(php_wxPrinterDC, GetPaperRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinterDC, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPrinterDC * php_wxPrinterDC_fetch_object(zend_object *obj) {
    return (zo_wxPrinterDC *)(
        (char *)(obj) - XtOffsetOf(zo_wxPrinterDC, zo)
    );
}

#define Z_wxPrinterDC_P(zv) \
    php_wxPrinterDC_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPreviewControlBar_entry;
extern zend_object_handlers wxphp_wxPreviewControlBar_object_handlers;
void php_wxPreviewControlBar_destruction_handler(zend_resource*);

class wxPreviewControlBar_php: public wxPreviewControlBar{
    public:

    wxPreviewControlBar_php(wxPrintPreview* preview, long buttons, wxWindow* parent, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name="panel"):wxPreviewControlBar(preview, buttons, parent, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPreviewControlBar{
    wxPreviewControlBar_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPreviewControlBar;

void php_wxPreviewControlBar_free(void *object);
zend_object* php_wxPreviewControlBar_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPreviewControlBar_functions[] = {
    PHP_ME(php_wxPreviewControlBar, CreateButtons, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewControlBar, GetZoomControl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewControlBar, SetZoomControl, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewControlBar, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPreviewControlBar * php_wxPreviewControlBar_fetch_object(zend_object *obj) {
    return (zo_wxPreviewControlBar *)(
        (char *)(obj) - XtOffsetOf(zo_wxPreviewControlBar, zo)
    );
}

#define Z_wxPreviewControlBar_P(zv) \
    php_wxPreviewControlBar_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPreviewCanvas_entry;
extern zend_object_handlers wxphp_wxPreviewCanvas_object_handlers;
void php_wxPreviewCanvas_destruction_handler(zend_resource*);

class wxPreviewCanvas_php: public wxPreviewCanvas{
    public:

    wxPreviewCanvas_php(wxPrintPreview* preview, wxWindow* parent, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0, const wxString& name="canvas"):wxPreviewCanvas(preview, parent, pos, size, style, name){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPreviewCanvas{
    wxPreviewCanvas_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPreviewCanvas;

void php_wxPreviewCanvas_free(void *object);
zend_object* php_wxPreviewCanvas_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPreviewCanvas_functions[] = {
    PHP_ME(php_wxPreviewCanvas, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPreviewCanvas * php_wxPreviewCanvas_fetch_object(zend_object *obj) {
    return (zo_wxPreviewCanvas *)(
        (char *)(obj) - XtOffsetOf(zo_wxPreviewCanvas, zo)
    );
}

#define Z_wxPreviewCanvas_P(zv) \
    php_wxPreviewCanvas_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPreviewFrame_entry;
extern zend_object_handlers wxphp_wxPreviewFrame_object_handlers;
void php_wxPreviewFrame_destruction_handler(zend_resource*);

class wxPreviewFrame_php: public wxPreviewFrame{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPreviewFrame{
    wxPreviewFrame_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPreviewFrame;

void php_wxPreviewFrame_free(void *object);
zend_object* php_wxPreviewFrame_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPreviewFrame_functions[] = {
    PHP_ME(php_wxPreviewFrame, CreateCanvas, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewFrame, CreateControlBar, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewFrame, Initialize, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPreviewFrame, InitializeWithModality, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxPreviewFrame * php_wxPreviewFrame_fetch_object(zend_object *obj) {
    return (zo_wxPreviewFrame *)(
        (char *)(obj) - XtOffsetOf(zo_wxPreviewFrame, zo)
    );
}

#define Z_wxPreviewFrame_P(zv) \
    php_wxPreviewFrame_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPrintPreview_entry;
extern zend_object_handlers wxphp_wxPrintPreview_object_handlers;
void php_wxPrintPreview_destruction_handler(zend_resource*);

class wxPrintPreview_php: public wxPrintPreview{
    public:

    wxPrintPreview_php(wxPrintout* printout, wxPrintout* printoutForPrinting=NULL, wxPrintDialogData* data=NULL):wxPrintPreview(printout, printoutForPrinting, data){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrintPreview{
    wxPrintPreview_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrintPreview;

void php_wxPrintPreview_free(void *object);
zend_object* php_wxPrintPreview_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrintPreview_functions[] = {
    PHP_ME(php_wxPrintPreview, GetCanvas, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetCurrentPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetFrame, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetMaxPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetMinPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetPrintout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, GetPrintoutForPrinting, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, PaintPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, PrintMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, RenderPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, SetCanvas, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, SetCurrentPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, SetFrame, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, SetPrintout, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, SetZoom, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintPreview, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPrintPreview * php_wxPrintPreview_fetch_object(zend_object *obj) {
    return (zo_wxPrintPreview *)(
        (char *)(obj) - XtOffsetOf(zo_wxPrintPreview, zo)
    );
}

#define Z_wxPrintPreview_P(zv) \
    php_wxPrintPreview_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPrinter_entry;
extern zend_object_handlers wxphp_wxPrinter_object_handlers;
void php_wxPrinter_destruction_handler(zend_resource*);

class wxPrinter_php: public wxPrinter{
    public:

    wxPrinter_php(wxPrintDialogData* data=NULL):wxPrinter(data){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrinter{
    wxPrinter_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrinter;

void php_wxPrinter_free(void *object);
zend_object* php_wxPrinter_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrinter_functions[] = {
    PHP_ME(php_wxPrinter, GetAbort, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, GetLastError, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, GetPrintDialogData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, PrintMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, PrintDialog, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, ReportError, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, Setup, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrinter, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPrinter * php_wxPrinter_fetch_object(zend_object *obj) {
    return (zo_wxPrinter *)(
        (char *)(obj) - XtOffsetOf(zo_wxPrinter, zo)
    );
}

#define Z_wxPrinter_P(zv) \
    php_wxPrinter_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPrintout_entry;
extern zend_object_handlers wxphp_wxPrintout_object_handlers;
void php_wxPrintout_destruction_handler(zend_resource*);

class wxPrintout_php: public wxPrintout{
    public:

    wxPrintout_php(const wxString& title="Printout"):wxPrintout(title){}
    
    bool OnBeginDocument(int startPage, int endPage);
    void OnBeginPrinting();
    void OnEndDocument();
    void OnEndPrinting();
    void OnPreparePrinting();
    bool OnPrintPage(int pageNum);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrintout{
    wxPrintout_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrintout;

void php_wxPrintout_free(void *object);
zend_object* php_wxPrintout_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrintout_functions[] = {
    PHP_ME(php_wxPrintout, FitThisSizeToPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, FitThisSizeToPageMargins, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, FitThisSizeToPaper, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetDC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetLogicalPageMarginsRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetLogicalPageRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetLogicalPaperRect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPPIPrinter, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPPIScreen, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPageInfo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPageSizeMM, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPageSizePixels, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPaperRectPixels, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetPreview, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, GetTitle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, HasPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, IsPreview, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, MapScreenSizeToDevice, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, MapScreenSizeToPage, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, MapScreenSizeToPageMargins, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, MapScreenSizeToPaper, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, OffsetLogicalOrigin, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, SetLogicalOrigin, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintout, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxPrintout * php_wxPrintout_fetch_object(zend_object *obj) {
    return (zo_wxPrintout *)(
        (char *)(obj) - XtOffsetOf(zo_wxPrintout, zo)
    );
}

#define Z_wxPrintout_P(zv) \
    php_wxPrintout_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPrintDialog_entry;
extern zend_object_handlers wxphp_wxPrintDialog_object_handlers;
void php_wxPrintDialog_destruction_handler(zend_resource*);

class wxPrintDialog_php: public wxPrintDialog{
    public:

    wxPrintDialog_php(wxWindow* parent, wxPrintDialogData* data=NULL):wxPrintDialog(parent, data){}
    wxPrintDialog_php(wxWindow* parent, wxPrintData* data):wxPrintDialog(parent, data){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrintDialog{
    wxPrintDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrintDialog;

void php_wxPrintDialog_free(void *object);
zend_object* php_wxPrintDialog_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrintDialog_functions[] = {
    PHP_ME(php_wxPrintDialog, GetPrintDC, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintDialog, GetPrintDialogData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPrintDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxPrintDialog, GetPrintData, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxPrintDialog * php_wxPrintDialog_fetch_object(zend_object *obj) {
    return (zo_wxPrintDialog *)(
        (char *)(obj) - XtOffsetOf(zo_wxPrintDialog, zo)
    );
}

#define Z_wxPrintDialog_P(zv) \
    php_wxPrintDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPageSetupDialog_entry;
extern zend_object_handlers wxphp_wxPageSetupDialog_object_handlers;
void php_wxPageSetupDialog_destruction_handler(zend_resource*);

class wxPageSetupDialog_php: public wxPageSetupDialog{
    public:

    wxPageSetupDialog_php(wxWindow* parent, wxPageSetupDialogData* data=NULL):wxPageSetupDialog(parent, data){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPageSetupDialog{
    wxPageSetupDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPageSetupDialog;

void php_wxPageSetupDialog_free(void *object);
zend_object* php_wxPageSetupDialog_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPageSetupDialog_functions[] = {
    PHP_ME(php_wxPageSetupDialog, GetPageSetupData, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxPageSetupDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxPageSetupDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxPageSetupDialog * php_wxPageSetupDialog_fetch_object(zend_object *obj) {
    return (zo_wxPageSetupDialog *)(
        (char *)(obj) - XtOffsetOf(zo_wxPageSetupDialog, zo)
    );
}

#define Z_wxPageSetupDialog_P(zv) \
    php_wxPageSetupDialog_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_PRINTING_H_GUARD
