//
//  PDAppDelegate.h
//  BackgroundUpload-CocoaLumberjack
//
//  Created by CocoaPods on 02/12/2015.
//  Copyright (c) 2014 Eric Jensen. All rights reserved.
//

#import <UIKit/UIKit.h>
#define DD_LEGACY_MACROS 0
#import <CocoaLumberjack/CocoaLumberjack.h>

@interface PDAppDelegate : UIResponder <UIApplicationDelegate>

extern const DDLogLevel ddLogLevel;;

@property (strong, nonatomic) UIWindow *window;

@end
