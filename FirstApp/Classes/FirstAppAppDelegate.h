//
//  FirstAppAppDelegate.h
//  FirstApp
//
//  Created by James Wei on 11-2-22.
//  Copyright 2011 Macroplant. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@end

