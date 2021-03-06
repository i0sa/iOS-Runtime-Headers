/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, NSURL, SKUIImageViewElementCacheKey;

@interface SKUIImageViewElement : SKUIViewElement {
    struct CGSize { 
        double width; 
        double height; 
    NSString *_alt;
    BOOL _enabled;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    } _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
}

@property(readonly) NSURL * URL;
@property(readonly) id resourceCacheKey;
@property(readonly) NSString * resourceName;
@property(readonly) struct CGSize { double x1; double x2; } size;
@property(readonly) id transientResourceCacheKey;

- (void).cxx_destruct;
- (id)URL;
- (id)accessibilityText;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (bool)isEnabled;
- (long long)pageComponentType;
- (bool)rendersWithPerspective;
- (id)resourceCacheKey;
- (id)resourceName;
- (struct CGSize { double x1; double x2; })size;
- (id)transientResourceCacheKey;

@end
