#import <UIKit/UIKit.h>

@interface ScannerOverlay : UIView
  @property(nonatomic) CGRect scanLineRect;
  
  - (void) startAnimating;
  - (void) stopAnimating;
  - (void) setNavigationBarHeight:(CGFloat)actionBarHeight
@end
