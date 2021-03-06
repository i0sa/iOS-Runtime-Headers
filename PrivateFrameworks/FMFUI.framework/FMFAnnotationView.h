/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class CALayer, CAShapeLayer;

@interface FMFAnnotationView : MKAnnotationView {
    long long _annotationSize;
    CALayer *_centerImageLayer;
    CAShapeLayer *_circleLayer;
    double _futureRotationAmount;
    CAShapeLayer *_markerCenter;
    CAShapeLayer *_markerOval;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_tailLayer;
    bool_isRotating;
    bool_wantsRotation;
}

@property long long annotationSize;
@property(retain) CALayer * centerImageLayer;
@property(retain) CAShapeLayer * circleLayer;
@property double futureRotationAmount;
@property bool isRotating;
@property(retain) CAShapeLayer * markerCenter;
@property(retain) CAShapeLayer * markerOval;
@property(retain) CAShapeLayer * shapeLayer;
@property(retain) CAShapeLayer * tailLayer;
@property bool wantsRotation;

+ (id)circlePath;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)animationDuration;
- (long long)annotationSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerImageFrameForSize:(long long)arg1;
- (id)centerImageLayer;
- (id)circleLayer;
- (id)clipImageToCircle:(id)arg1;
- (id)fallbackPersonImage;
- (double)futureRotationAmount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRectForSize;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRotating;
- (id)largeBezierPath;
- (id)largeCircle;
- (id)largeTail;
- (id)lineWidthForSize:(long long)arg1;
- (id)markerCenter;
- (id)markerCenterPath;
- (id)markerCenterPathSmall;
- (id)markerOval;
- (id)markerOvalPath;
- (id)markerOvalPathSmall;
- (void)prepareForReuse;
- (void)setAnnotationSize:(double)arg1 animated:(bool)arg2;
- (void)setAnnotationSize:(long long)arg1;
- (void)setCenterImageLayer:(id)arg1;
- (void)setCircleLayer:(id)arg1;
- (void)setFutureRotationAmount:(double)arg1;
- (void)setIsRotating:(bool)arg1;
- (void)setMarkerCenter:(id)arg1;
- (void)setMarkerOval:(id)arg1;
- (void)setPersonImage:(id)arg1;
- (void)setShapeLayer:(id)arg1;
- (void)setTailLayer:(id)arg1;
- (void)setWantsRotation:(bool)arg1;
- (id)shadowOpacityForSize:(long long)arg1;
- (id)shapeLayer;
- (id)shutterCircle;
- (id)shutterLineWidthForSize:(long long)arg1;
- (void)sizeAnnotationView;
- (id)smallBezierPath;
- (id)smallCircle;
- (id)smallTail;
- (id)tailLayer;
- (void)updateAnnotationShutter;
- (bool)wantsRotation;

@end
