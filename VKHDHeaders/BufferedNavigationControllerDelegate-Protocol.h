//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIViewController;

@protocol BufferedNavigationControllerDelegate <NSObject>
- (void)willPushViewController:(UIViewController *)arg1;
- (void)willSetViewControllers:(NSArray *)arg1;
- (void)willShowViewController:(UIViewController *)arg1 byPush:(_Bool)arg2;
- (void)didPopViewController:(UIViewController *)arg1 toRoot:(_Bool)arg2;
- (_Bool)needPopViewController:(UIViewController *)arg1 toRoot:(_Bool)arg2;
- (void)didShowViewController:(UIViewController *)arg1;
- (_Bool)needPushViewController:(UIViewController *)arg1;
@end

