//
//  PZAppDelegate.h
//  Puzzle

////////////////////////////////////////////////////////////////////////////////
#import <UIKit/UIKit.h>

////////////////////////////////////////////////////////////////////////////////
@class PZViewController;

@interface PZAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PZViewController *viewController;

@end
