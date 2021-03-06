/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIViewElementText;

@interface SKUILabelViewElement : SKUIViewElement {
    long long _labelViewStyle;
    NSString *_moreButtonTitle;
    long long _numberOfLines;
    SKUIViewElementText *_text;
}

@property(readonly) long long labelViewStyle;
@property(readonly) NSString * moreButtonTitle;
@property(readonly) long long numberOfLines;
@property(readonly) SKUIViewElementText * text;

+ (bool)shouldParseChildDOMElements;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)labelViewStyle;
- (id)moreButtonTitle;
- (long long)numberOfLines;
- (long long)pageComponentType;
- (id)text;

@end
