/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class STShadowBlurRadiusAnimation, UIColor;

@interface STShadowLabel : UILabel {
    float _animatedAuxiliaryShadowBlurRadius;
    BOOL _animating;
    float _auxiliaryShadowBlurRadius;
    UIColor *_auxiliaryShadowColor;
    BOOL _phase;
    STShadowBlurRadiusAnimation *_pulseAnimation;
}

- (void)_updateShadowBlurRadiusWithProgress:(float)arg1;
- (void)animator:(id)arg1 stopAnimation:(id)arg2;
- (void)dealloc;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAuxiliaryShadowBlurRadius:(float)arg1;
- (void)setAuxiliaryShadowColor:(id)arg1;
- (void)startPulse;
- (void)stopPulse;

@end