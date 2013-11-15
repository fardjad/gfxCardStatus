//
//  GSNotifier.h
//  gfxCardStatus
//
//  Created by Cody Krieger on 6/12/12.
//  Copyright (c) 2012 Cody Krieger. All rights reserved.
//

#import "GSGPU.h"
#import "GSMenuController.h"
#import <Growl/Growl.h>

@interface GSNotifier : NSObject<GrowlApplicationBridgeDelegate>

+ (GSNotifier *)sharedInstance;

+ (void)showGPUChangeNotification:(GSGPUType)type;
+ (void)showOneTimeNotification;
+ (void)showUnsupportedMachineMessage;

+ (BOOL)notificationCenterIsAvailable;

@end
