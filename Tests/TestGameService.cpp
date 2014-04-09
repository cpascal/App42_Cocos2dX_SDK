//
//  TestGameService.cpp
//  App42Cocos2dXSDK_3.0Beta2_Sample
//
//  Created by Rajeev Ranjan on 31/03/14.
//
//

#include "TestGameService.h"
#include "TestHome.h"


#define GO_HOME 1041

USING_NS_CC;

Scene* TestGameService::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = TestGameService::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


bool TestGameService::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();
    
    
    auto backButtonItem = MenuItemImage::create(
                                                "BackButton.png",
                                                "BackButton.png",
                                                CC_CALLBACK_1(TestGameService::menuCloseCallback, this));
    
	backButtonItem->setPosition(Point(origin.x + visibleSize.width/2 ,
                                      origin.y + backButtonItem->getContentSize().height/2));
    backButtonItem->setTag(GO_HOME);
    
    // create menu, it's an autorelease object
    auto menu = Menu::create(backButtonItem, NULL);
    menu->setPosition(Point::ZERO);
    this->addChild(menu, 1);
    
    return true;
}
void TestGameService::menuCloseCallback(Ref* pSender)
{
    MenuItem *item = (MenuItem*)pSender;
    int senderTag = item->getTag();
    switch (senderTag)
    {
        case GO_HOME:
        {
            // create a scene. it's an autorelease object
            auto scene = TestHome::createScene();
            
            // run
            Director::getInstance()->replaceScene(scene);
            
            break;
        }
        default:
            break;
    }
}