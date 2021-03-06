/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class PT2DGraphView;

@interface PT2DGraphDotView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    PT2DGraphView *_graph;
    } _graphPoint;
}

@property PT2DGraphView * graph;
@property struct CGPoint { double x1; double x2; } graphPoint;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)graph;
- (struct CGPoint { double x1; double x2; })graphPoint;
- (id)init;
- (void)setGraph:(id)arg1;
- (void)setGraphPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
