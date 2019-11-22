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

#ifndef WXPHP_APPMANAGEMENT_H_GUARD
#define WXPHP_APPMANAGEMENT_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_appmanagement_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxEventLoopBase_entry;
extern zend_object_handlers wxphp_wxEventLoopBase_object_handlers;
void php_wxEventLoopBase_destruction_handler(zend_resource*);

class wxEventLoopBase_php: public wxEventLoopBase{
    public:

    
    bool Dispatch();
    int DispatchTimeout(unsigned long timeout);
    void OnExit();
    bool Pending() const;
    int Run();
    void WakeUp();
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxEventLoopBase{
    wxEventLoopBase_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxEventLoopBase;

void php_wxEventLoopBase_free(void *object);
zend_object* php_wxEventLoopBase_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxEventLoopBase_functions[] = {
    PHP_ME(php_wxEventLoopBase, GetActive, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, IsEventAllowedInsideYield, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, IsMain, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, IsRunning, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, IsYielding, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, ProcessIdle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, ExitMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, SetActive, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, WakeUpIdle, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, YieldMethod, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxEventLoopBase, YieldFor, NULL, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxEventLoopBase * php_wxEventLoopBase_fetch_object(zend_object *obj) {
    return (zo_wxEventLoopBase *)(
        (char *)(obj) - XtOffsetOf(zo_wxEventLoopBase, zo)
    );
}

#define Z_wxEventLoopBase_P(zv) \
    php_wxEventLoopBase_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxEventLoopActivator_entry;
extern zend_object_handlers wxphp_wxEventLoopActivator_object_handlers;
void php_wxEventLoopActivator_destruction_handler(zend_resource*);

class wxEventLoopActivator_php: public wxEventLoopActivator{
    public:

    wxEventLoopActivator_php(wxEventLoopBase* loop):wxEventLoopActivator(loop){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxEventLoopActivator{
    wxEventLoopActivator_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxEventLoopActivator;

void php_wxEventLoopActivator_free(void *object);
zend_object* php_wxEventLoopActivator_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxEventLoopActivator_functions[] = {
    PHP_ME(php_wxEventLoopActivator, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxEventLoopActivator * php_wxEventLoopActivator_fetch_object(zend_object *obj) {
    return (zo_wxEventLoopActivator *)(
        (char *)(obj) - XtOffsetOf(zo_wxEventLoopActivator, zo)
    );
}

#define Z_wxEventLoopActivator_P(zv) \
    php_wxEventLoopActivator_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxModule_entry;
extern zend_object_handlers wxphp_wxModule_object_handlers;
void php_wxModule_destruction_handler(zend_resource*);

class wxModule_php: public wxModule{
    public:

    wxModule_php():wxModule(){}
    
    void OnExit();
    bool OnInit();
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxModule{
    wxModule_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxModule;

void php_wxModule_free(void *object);
zend_object* php_wxModule_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxModule_functions[] = {
    PHP_ME(php_wxModule, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxModule * php_wxModule_fetch_object(zend_object *obj) {
    return (zo_wxModule *)(
        (char *)(obj) - XtOffsetOf(zo_wxModule, zo)
    );
}

#define Z_wxModule_P(zv) \
    php_wxModule_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxProcess_entry;
extern zend_object_handlers wxphp_wxProcess_object_handlers;
void php_wxProcess_destruction_handler(zend_resource*);

class wxProcess_php: public wxProcess{
    public:

    wxProcess_php(wxEvtHandler* parent=NULL, int id=-1):wxProcess(parent, id){}
    wxProcess_php(int flags):wxProcess(flags){}
    
    void OnTerminate(int pid, int status);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxProcess{
    wxProcess_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxProcess;

void php_wxProcess_free(void *object);
zend_object* php_wxProcess_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxProcess_functions[] = {
    PHP_ME(php_wxProcess, CloseOutput, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, Detach, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, Exists, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, GetErrorStream, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, GetInputStream, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, GetOutputStream, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, GetPid, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, IsErrorAvailable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, IsInputOpened, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, Kill, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, IsInputAvailable, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, Redirect, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, Open, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxProcess, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxProcess * php_wxProcess_fetch_object(zend_object *obj) {
    return (zo_wxProcess *)(
        (char *)(obj) - XtOffsetOf(zo_wxProcess, zo)
    );
}

#define Z_wxProcess_P(zv) \
    php_wxProcess_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxSingleInstanceChecker_entry;
extern zend_object_handlers wxphp_wxSingleInstanceChecker_object_handlers;
void php_wxSingleInstanceChecker_destruction_handler(zend_resource*);

class wxSingleInstanceChecker_php: public wxSingleInstanceChecker{
    public:

    wxSingleInstanceChecker_php():wxSingleInstanceChecker(){}
    wxSingleInstanceChecker_php(const wxString& name, const wxString& path=wxEmptyString):wxSingleInstanceChecker(name, path){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxSingleInstanceChecker{
    wxSingleInstanceChecker_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxSingleInstanceChecker;

void php_wxSingleInstanceChecker_free(void *object);
zend_object* php_wxSingleInstanceChecker_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSingleInstanceChecker_functions[] = {
    PHP_ME(php_wxSingleInstanceChecker, Create, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxSingleInstanceChecker, CreateDefault, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxSingleInstanceChecker, IsAnotherRunning, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxSingleInstanceChecker, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxSingleInstanceChecker * php_wxSingleInstanceChecker_fetch_object(zend_object *obj) {
    return (zo_wxSingleInstanceChecker *)(
        (char *)(obj) - XtOffsetOf(zo_wxSingleInstanceChecker, zo)
    );
}

#define Z_wxSingleInstanceChecker_P(zv) \
    php_wxSingleInstanceChecker_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_APPMANAGEMENT_H_GUARD
