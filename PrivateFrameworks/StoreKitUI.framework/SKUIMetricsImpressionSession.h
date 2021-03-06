/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface SKUIMetricsImpressionSession : NSObject {
    NSMutableArray *_impressionIdentifiers;
    NSMutableOrderedSet *_impressionableViewElements;
    NSMapTable *_impressionableViewElementsTimerMap;
    NSMutableString *_impressionsString;
}

@property(copy,readonly) NSArray * impressionIdentifiers;
@property(copy,readonly) NSArray * impressionableViewElements;
@property(copy,readonly) NSString * impressionsString;

- (void).cxx_destruct;
- (void)_clearTimerForViewElement:(id)arg1;
- (id)_getTimerForViewElement:(id)arg1;
- (void)_setTimer:(id)arg1 forViewElement:(id)arg2;
- (void)addItemIdentifier:(long long)arg1;
- (void)addItemViewElement:(id)arg1;
- (void)beginActiveImpressionForViewElement:(id)arg1;
- (void)endActiveImpressionForViewElement:(id)arg1;
- (id)impressionIdentifiers;
- (id)impressionableViewElements;
- (id)impressionsString;
- (id)init;

@end
