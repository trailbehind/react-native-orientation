//
//  Orientation.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RCTBridgeModule.h"
#import "RCTBridge.h"
#import "RCTEventDispatcher.h"
#import "MapAppDelegate.h"

@interface Orientation : NSObject <RCTBridgeModule>
+ (void)setOrientation: (int)orientation;
+ (int)getOrientation;
@end

@interface MapAppDelegate (Orientation)

@end
