/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIImageView {
    double _cornerRadius;
    UIColor *_fillColor;
    double _lineWidth;
    UIColor *_strokeColor;
    bool_disabled;
}

@property double cornerRadius;
@property(retain) UIColor * fillColor;
@property double lineWidth;
@property(retain) UIColor * strokeColor;

- (id)_fillColor:(bool)arg1;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2 lineWidth:(double)arg3 updateView:(bool)arg4;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2 lineWidth:(double)arg3;
- (double)_pathInset;
- (double)_pixelAlignment;
- (id)_strokeColor:(bool)arg1;
- (double)cornerRadius;
- (void)dealloc;
- (id)fillColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 active:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)lineWidth;
- (void)setActive:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setFillColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setStrokeColor:(id)arg1;
- (id)strokeColor;
- (void)updateView;

@end
