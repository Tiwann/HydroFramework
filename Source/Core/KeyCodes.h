#pragma once
#include "HydroPCH.h"

#define HYDRO_KEY_UNKNOWN            -1
#define HYDRO_KEY_SPACE              32
#define HYDRO_KEY_APOSTROPHE         39  
#define HYDRO_KEY_COMMA              44  
#define HYDRO_KEY_MINUS              45  
#define HYDRO_KEY_PERIOD             46  
#define HYDRO_KEY_SLASH              47  
#define HYDRO_KEY_0                  48
#define HYDRO_KEY_1                  49
#define HYDRO_KEY_2                  50
#define HYDRO_KEY_3                  51
#define HYDRO_KEY_4                  52
#define HYDRO_KEY_5                  53
#define HYDRO_KEY_6                  54
#define HYDRO_KEY_7                  55
#define HYDRO_KEY_8                  56
#define HYDRO_KEY_9                  57
#define HYDRO_KEY_SEMICOLON          59  
#define HYDRO_KEY_EQUAL              61  
#define HYDRO_KEY_A                  65
#define HYDRO_KEY_B                  66
#define HYDRO_KEY_C                  67
#define HYDRO_KEY_D                  68
#define HYDRO_KEY_E                  69
#define HYDRO_KEY_F                  70
#define HYDRO_KEY_G                  71
#define HYDRO_KEY_H                  72
#define HYDRO_KEY_I                  73
#define HYDRO_KEY_J                  74
#define HYDRO_KEY_K                  75
#define HYDRO_KEY_L                  76
#define HYDRO_KEY_M                  77
#define HYDRO_KEY_N                  78
#define HYDRO_KEY_O                  79
#define HYDRO_KEY_P                  80
#define HYDRO_KEY_Q                  81
#define HYDRO_KEY_R                  82
#define HYDRO_KEY_S                  83
#define HYDRO_KEY_T                  84
#define HYDRO_KEY_U                  85
#define HYDRO_KEY_V                  86
#define HYDRO_KEY_W                  87
#define HYDRO_KEY_X                  88
#define HYDRO_KEY_Y                  89
#define HYDRO_KEY_Z                  90
#define HYDRO_KEY_LEFT_BRACKET       91  
#define HYDRO_KEY_BACKSLASH          92  
#define HYDRO_KEY_RIGHT_BRACKET      93  
#define HYDRO_KEY_GRAVE_ACCENT       96  
#define HYDRO_KEY_WORLD_1            161 
#define HYDRO_KEY_WORLD_2            162 
#define HYDRO_KEY_ESCAPE             256
#define HYDRO_KEY_ENTER              257
#define HYDRO_KEY_TAB                258
#define HYDRO_KEY_BACKSPACE          259
#define HYDRO_KEY_INSERT             260
#define HYDRO_KEY_DELETE             261
#define HYDRO_KEY_RIGHT              262
#define HYDRO_KEY_LEFT               263
#define HYDRO_KEY_DOWN               264
#define HYDRO_KEY_UP                 265
#define HYDRO_KEY_PAGE_UP            266
#define HYDRO_KEY_PAGE_DOWN          267
#define HYDRO_KEY_HOME               268
#define HYDRO_KEY_END                269
#define HYDRO_KEY_CAPS_LOCK          280
#define HYDRO_KEY_SCROLL_LOCK        281
#define HYDRO_KEY_NUM_LOCK           282
#define HYDRO_KEY_PRINT_SCREEN       283
#define HYDRO_KEY_PAUSE              284
#define HYDRO_KEY_F1                 290
#define HYDRO_KEY_F2                 291
#define HYDRO_KEY_F3                 292
#define HYDRO_KEY_F4                 293
#define HYDRO_KEY_F5                 294
#define HYDRO_KEY_F6                 295
#define HYDRO_KEY_F7                 296
#define HYDRO_KEY_F8                 297
#define HYDRO_KEY_F9                 298
#define HYDRO_KEY_F10                299
#define HYDRO_KEY_F11                300
#define HYDRO_KEY_F12                301
#define HYDRO_KEY_F13                302
#define HYDRO_KEY_F14                303
#define HYDRO_KEY_F15                304
#define HYDRO_KEY_F16                305
#define HYDRO_KEY_F17                306
#define HYDRO_KEY_F18                307
#define HYDRO_KEY_F19                308
#define HYDRO_KEY_F20                309
#define HYDRO_KEY_F21                310
#define HYDRO_KEY_F22                311
#define HYDRO_KEY_F23                312
#define HYDRO_KEY_F24                313
#define HYDRO_KEY_F25                314
#define HYDRO_KEY_KP_0               320
#define HYDRO_KEY_KP_1               321
#define HYDRO_KEY_KP_2               322
#define HYDRO_KEY_KP_3               323
#define HYDRO_KEY_KP_4               324
#define HYDRO_KEY_KP_5               325
#define HYDRO_KEY_KP_6               326
#define HYDRO_KEY_KP_7               327
#define HYDRO_KEY_KP_8               328
#define HYDRO_KEY_KP_9               329
#define HYDRO_KEY_KP_DECIMAL         330
#define HYDRO_KEY_KP_DIVIDE          331
#define HYDRO_KEY_KP_MULTIPLY        332
#define HYDRO_KEY_KP_SUBTRACT        333
#define HYDRO_KEY_KP_ADD             334
#define HYDRO_KEY_KP_ENTER           335
#define HYDRO_KEY_KP_EQUAL           336
#define HYDRO_KEY_LEFT_SHIFT         340
#define HYDRO_KEY_LEFT_CONTROL       341
#define HYDRO_KEY_LEFT_ALT           342
#define HYDRO_KEY_LEFT_SUPER         343
#define HYDRO_KEY_RIGHT_SHIFT        344
#define HYDRO_KEY_RIGHT_CONTROL      345
#define HYDRO_KEY_RIGHT_ALT          346
#define HYDRO_KEY_RIGHT_SUPER        347
#define HYDRO_KEY_MENU               348
#define HYDRO_KEY_TOTAL              HYDRO_KEY_MENU

namespace Hydro
{
    enum class KeyCode
    {
        UNKNOWN       = HYDRO_KEY_UNKNOWN,
        SPACE         = HYDRO_KEY_SPACE,
        APOSTROPHE    = HYDRO_KEY_APOSTROPHE,
        COMMA         = HYDRO_KEY_COMMA,
        MINUS         = HYDRO_KEY_MINUS,
        PERIOD        = HYDRO_KEY_PERIOD,
        SLASH         = HYDRO_KEY_SLASH,
        KEY_0         = HYDRO_KEY_0,
        KEY_1         = HYDRO_KEY_1,
        KEY_2         = HYDRO_KEY_2,
        KEY_3         = HYDRO_KEY_3,
        KEY_4         = HYDRO_KEY_4,
        KEY_5         = HYDRO_KEY_5,
        KEY_6         = HYDRO_KEY_6,
        KEY_7         = HYDRO_KEY_7,           
        KEY_8         = HYDRO_KEY_8,            
        KEY_9         = HYDRO_KEY_9,            
        SEMICOLON     = HYDRO_KEY_SEMICOLON,
        EQUAL         = HYDRO_KEY_EQUAL,        
        A             = HYDRO_KEY_A,            
        B             = HYDRO_KEY_B,            
        C             = HYDRO_KEY_C,            
        D             = HYDRO_KEY_D,            
        E             = HYDRO_KEY_E,            
        F             = HYDRO_KEY_F,            
        G             = HYDRO_KEY_G,            
        H             = HYDRO_KEY_H,            
        I             = HYDRO_KEY_I,            
        J             = HYDRO_KEY_J,            
        K             = HYDRO_KEY_K,            
        L             = HYDRO_KEY_L,            
        M             = HYDRO_KEY_M,            
        N             = HYDRO_KEY_N,            
        O             = HYDRO_KEY_O,            
        P             = HYDRO_KEY_P,            
        Q             = HYDRO_KEY_Q,            
        R             = HYDRO_KEY_R,            
        S             = HYDRO_KEY_S,            
        T             = HYDRO_KEY_T,            
        U             = HYDRO_KEY_U,            
        V             = HYDRO_KEY_V,            
        W             = HYDRO_KEY_W,            
        X             = HYDRO_KEY_X,            
        Y             = HYDRO_KEY_Y,            
        Z             = HYDRO_KEY_Z,            
        LEFT_BRACKET  = HYDRO_KEY_LEFT_BRACKET, 
        BACKSLASH     = HYDRO_KEY_BACKSLASH,   
        RIGHT_BRACKET = HYDRO_KEY_RIGHT_BRACKET,
        GRAVE_ACCENT  = HYDRO_KEY_GRAVE_ACCENT, 
        WORLD_1       = HYDRO_KEY_WORLD_1,      
        WORLD_2       = HYDRO_KEY_WORLD_2,      
        ESCAPE        = HYDRO_KEY_ESCAPE,       
        ENTER         = HYDRO_KEY_ENTER,        
        TAB           = HYDRO_KEY_TAB,          
        BACKSPACE     = HYDRO_KEY_BACKSPACE,    
        INSERT        = HYDRO_KEY_INSERT,       
        DELETE_KEY    = HYDRO_KEY_DELETE,       
        RIGHT         = HYDRO_KEY_RIGHT,        
        LEFT          = HYDRO_KEY_LEFT,         
        DOWN          = HYDRO_KEY_DOWN,         
        UP            = HYDRO_KEY_UP,           
        PAGE_UP       = HYDRO_KEY_PAGE_UP,      
        PAGE_DOWN     = HYDRO_KEY_PAGE_DOWN,    
        HOME          = HYDRO_KEY_HOME,         
        END           = HYDRO_KEY_END,          
        CAPS_LOCK     = HYDRO_KEY_CAPS_LOCK,    
        SCROLL_LOCK   = HYDRO_KEY_SCROLL_LOCK,  
        NUM_LOCK      = HYDRO_KEY_NUM_LOCK,     
        PRINT_SCREEN  = HYDRO_KEY_PRINT_SCREEN, 
        PAUSE         = HYDRO_KEY_PAUSE,        
        F1            = HYDRO_KEY_F1,           
        F2            = HYDRO_KEY_F2,           
        F3            = HYDRO_KEY_F3,           
        F4            = HYDRO_KEY_F4,           
        F5            = HYDRO_KEY_F5,           
        F6            = HYDRO_KEY_F6,           
        F7            = HYDRO_KEY_F7,           
        F8            = HYDRO_KEY_F8,           
        F9            = HYDRO_KEY_F9,           
        F10           = HYDRO_KEY_F10,          
        F11           = HYDRO_KEY_F11,          
        F12           = HYDRO_KEY_F12,          
        F13           = HYDRO_KEY_F13,          
        F14           = HYDRO_KEY_F14,          
        F15           = HYDRO_KEY_F15,          
        F16           = HYDRO_KEY_F16,          
        F17           = HYDRO_KEY_F17,          
        F18           = HYDRO_KEY_F18,          
        F19           = HYDRO_KEY_F19,          
        F20           = HYDRO_KEY_F20,          
        F21           = HYDRO_KEY_F21,          
        F22           = HYDRO_KEY_F22,          
        F23           = HYDRO_KEY_F23,          
        F24           = HYDRO_KEY_F24,          
        F25           = HYDRO_KEY_F25,          
        NUMPAD_0          = HYDRO_KEY_KP_0,         
        NUMPAD_1          = HYDRO_KEY_KP_1,         
        NUMPAD_2          = HYDRO_KEY_KP_2,         
        NUMPAD_3          = HYDRO_KEY_KP_3,         
        NUMPAD_4          = HYDRO_KEY_KP_4,         
        NUMPAD_5          = HYDRO_KEY_KP_5,         
        NUMPAD_6          = HYDRO_KEY_KP_6,         
        NUMPAD_7          = HYDRO_KEY_KP_7,         
        NUMPAD_8          = HYDRO_KEY_KP_8,         
        NUMPAD_9          = HYDRO_KEY_KP_9,         
        NUMPAD_DECIMAL    = HYDRO_KEY_KP_DECIMAL,   
        NUMPAD_DIVIDE     = HYDRO_KEY_KP_DIVIDE,    
        NUMPAD_MULTIPLY   = HYDRO_KEY_KP_MULTIPLY,  
        NUMPAD_SUBTRACT   = HYDRO_KEY_KP_SUBTRACT,  
        NUMPAD_ADD        = HYDRO_KEY_KP_ADD,       
        NUMPAD_ENTER      = HYDRO_KEY_KP_ENTER,     
        NUMPAD_EQUAL      = HYDRO_KEY_KP_EQUAL,     
        LEFT_SHIFT        = HYDRO_KEY_LEFT_SHIFT,   
        LEFT_CONTROL      = HYDRO_KEY_LEFT_CONTROL, 
        LEFT_ALT          = HYDRO_KEY_LEFT_ALT,     
        LEFT_SUPER        = HYDRO_KEY_LEFT_SUPER,  
        RIGHT_SHIFT       = HYDRO_KEY_RIGHT_SHIFT,  
        RIGHT_CONTROL     = HYDRO_KEY_RIGHT_CONTROL,
        RIGHT_ALT         = HYDRO_KEY_RIGHT_ALT,    
        RIGHT_SUPER       = HYDRO_KEY_RIGHT_SUPER,  
        MENU              = HYDRO_KEY_MENU,
        TOTAL             = MENU
    };
}