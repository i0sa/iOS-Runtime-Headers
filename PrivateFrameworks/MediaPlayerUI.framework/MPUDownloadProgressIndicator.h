/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class CADisplayLink, UIImageView;

@interface MPUDownloadProgressIndicator : UIButton {
    float _animatedStartValue;
    float _animatedValue;
    double _animationEndTime;
    double _animationStartTime;
    UIImageView *_centerImageView;
    CADisplayLink *_displayLink;
    long long _style;
    float _value;
    bool_animating;
    bool_canCancel;
    bool_mpExternalHidden;
    bool_mpInternalHidden;
}

@property bool canCancel;
@property(readonly) long long style;
@property float value;

+ (void)_drawModernGradientInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (bool)_isStyleModernShimmer:(long long)arg1;
+ (id)_nonstopImageForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForStyle:(long long)arg1;
+ (id)_stopImageForStyle:(long long)arg1;

- (void).cxx_destruct;
- (void)_animateValueOnDisplayLink:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_baseFrameForSize:(struct CGSize { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerImageViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forStyle:(long long)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_fillFrameForSize:(struct CGSize { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setInternalHidden:(bool)arg1;
- (bool)canCancel;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setCanCancel:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)setValue:(float)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)updateFromObserver:(id)arg1 animated:(bool)arg2;
- (void)updateFromObserver:(id)arg1;
- (float)value;

@end
