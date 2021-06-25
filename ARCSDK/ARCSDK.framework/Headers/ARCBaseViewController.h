//
//  ARCBaseViewController.h
//  ARCSDK
//
//  Created by highsky on 2021/5/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ARCBaseViewController : UIViewController

- (void)arcshowTopAlertWithTitle:(NSString *)title Color:(UIColor *)color;

- (void)arcshowHuDNew:(NSString *)text ToView:(UIView *)view;

- (void)archideHuDNewToView:(UIView *)view;

- (void)arcshowHuDNewWithText:(NSString *)text ToView:(UIView *)view;

- (void)arcshowHuDNewWithTextCustomTime:(NSString *)text ToView:(UIView *)view customTime:(NSInteger)time;

@end

NS_ASSUME_NONNULL_END
