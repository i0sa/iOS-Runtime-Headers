/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSBezierPathStub;

@interface MFCocoaRegion : MFRegion {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_bounds;
    NSBezierPathStub *m_path;
}

- (void)dealloc;
- (NSInteger)fill:(id)arg1 :(id)arg2;
- (NSInteger)frame:(id)arg1 :(id)arg2;
- (id)initWithPath:(id)arg1 :(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)initWithRects:(id)arg1 :(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 :(id)arg3;
- (NSInteger)invert:(id)arg1;
- (NSInteger)setClip:(id)arg1 :(NSInteger)arg2;

@end