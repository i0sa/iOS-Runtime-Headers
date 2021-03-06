/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk {
    struct CGPoint { 
        double x; 
        double y; 
    } anchor;
    boolmetricInfoCalculated;
    double maxFontLineHeight;
    float maxFontSize;
}

- (void)calculateMetrics;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(double)arg1;

@end
