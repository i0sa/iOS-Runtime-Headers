/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIFocusedTouchGestureRecognizer, SKUISearchBarViewElement, SKUISearchFieldController, UISearchBar, UIViewController;

@interface SKUISearchBarController : NSObject <SKUISearchFieldDelegate, UISearchBarDelegate> {
    SKUIFocusedTouchGestureRecognizer *_cancelTouchGestureRecognizer;
    SKUIClientContext *_clientContext;
    UIViewController *_parentViewController;
    UISearchBar *_searchBar;
    SKUISearchBarViewElement *_searchBarViewElement;
    SKUISearchFieldController *_searchFieldController;
    SKUISearchBarViewElement *_viewElement;
    bool_displaysSearchBarInNavigationBar;
    bool_showsResultsForEmptyField;
    bool_usesSearchFieldController;
}

@property(retain) SKUIClientContext * clientContext;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool displaysSearchBarInNavigationBar;
@property(readonly) unsigned long long hash;
@property UIViewController * parentViewController;
@property(readonly) UISearchBar * searchBar;
@property(retain) SKUISearchBarViewElement * searchBarViewElement;
@property bool showsResultsForEmptyField;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelGestureAction:(id)arg1;
- (void)_customizeSearchBar:(id)arg1;
- (void)_customizeSearchFieldController:(id)arg1;
- (void)_dispatchChangeEventWithText:(id)arg1;
- (void)_dispatchSubmitEventWithText:(id)arg1 URL:(id)arg2 searchHintOriginalTerm:(id)arg3 searchHintIndex:(id)arg4;
- (id)_newSearchFieldController;
- (void)_removeCancelTouchGestureRecognizer;
- (id)_searchFieldController;
- (id)clientContext;
- (void)dealloc;
- (bool)displaysSearchBarInNavigationBar;
- (id)initWithSearchBarViewElement:(id)arg1;
- (id)parentViewController;
- (void)reloadAfterDocumentUpdate;
- (void)resignActive:(bool)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBar;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (id)searchBarViewElement;
- (void)searchFieldController:(id)arg1 requestSearch:(id)arg2;
- (void)searchFieldController:(id)arg1 searchBarDidChangeText:(id)arg2;
- (bool)searchFieldControllerShouldBeginEditing:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSearchBarViewElement:(id)arg1;
- (void)setShowsResultsForEmptyField:(bool)arg1;
- (bool)showsResultsForEmptyField;

@end
