/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, UIView;

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray *_alongsideAnimations;
    NSMutableArray *_alongsideCompletions;
    UIView *_containerView;
    bool_transitionIsInFlight;
}

@property UIView * containerView;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)_alongsideAnimations:(bool)arg1;
- (id)_alongsideCompletions:(bool)arg1;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;
- (void)_runAlongsideAnimations;
- (void)_runAlongsideCompletionsAfterCommit;
- (bool)animateAlongsideTransition:(id)arg1 completion:(id)arg2;
- (bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (long long)completionCurve;
- (double)completionVelocity;
- (id)containerView;
- (void)dealloc;
- (bool)initiallyInteractive;
- (bool)isAnimated;
- (bool)isCancelled;
- (bool)isInteractive;
- (bool)isRotating;
- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;
- (double)percentComplete;
- (long long)presentationStyle;
- (void)setContainerView:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
