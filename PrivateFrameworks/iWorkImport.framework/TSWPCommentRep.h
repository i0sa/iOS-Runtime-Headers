/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class CALayer;

@interface TSWPCommentRep : TSWPShapeRep {
    CALayer *_authorLayer;
    CALayer *_dateLayer;
    CALayer *_headerLayer;
    bool_didNavigate;
    bool_needsAuthorOrDateUpdate;
    bool_shouldShowNavigationKnobs;
}

- (void)addKnobsToArray:(id)arg1;
- (id)additionalLayersOverLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForHighlightLayer;
- (bool)canBeUsedForImageMask;
- (bool)canMakePathEditable;
- (bool)canUseSpecializedHitRegionForKnob:(id)arg1;
- (void)dealloc;
- (void)didEndZooming;
- (void)didUpdateLayer:(id)arg1;
- (bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)dynamicDragDidEnd;
- (void)dynamicOperationDidBegin;
- (unsigned long long)enabledKnobMask;
- (bool)exclusivelyProvidesGuidesWhileAligning;
- (bool)forcesPlacementOnTop;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)invalidateAnnotationColor;
- (void)invalidateComments;
- (id)newCommandToApplyGeometry:(id)arg1 toInfo:(id)arg2;
- (id)newTrackerForKnob:(id)arg1;
- (void)p_deleteComment;
- (double)p_effectiveBorderStrokeWidthInPoints;
- (id)p_imageForString:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 baselineOffsetFromBottom:(double)arg3 foregroundColor:(struct CGColor { }*)arg4;
- (void)p_nextAnnotation;
- (void)p_previousAnnotation;
- (bool)p_shouldDraw;
- (bool)providesGuidesWhileAligning;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1;
- (void)screenScaleDidChange;
- (struct CGColor { }*)selectionHighlightColor;
- (double)selectionHighlightWidth;
- (bool)shouldHideSelectionHighlightDueToRectangularPath;
- (bool)shouldShowKnobs;
- (bool)shouldShowSmartShapeKnobs;
- (void)viewScaleDidChange;
- (void)willBeginEditingContainedRep;
- (void)willEndEditingContainedRep;

@end
