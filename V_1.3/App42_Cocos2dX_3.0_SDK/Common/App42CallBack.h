//
//  App42CallBack.h
//  App42Cocos2dXSDK_3.0Beta2_Sample
//
//  Created by Rajeev Ranjan on 27/03/14.
//
//

#ifndef App42Cocos2dXSDK_3_0Beta2_Sample_App42CallBack_h
#define App42Cocos2dXSDK_3_0Beta2_Sample_App42CallBack_h

#include <iostream>

class App42CallBack
{
    
};


/***
 * Callback Macro
 **/

typedef void (App42CallBack::*SEL_App42CallFuncND)(App42CallBack*, void*);
#define app42callfuncND_selector(_SELECTOR) static_cast<SEL_App42CallFuncND>(&_SELECTOR)

#endif
