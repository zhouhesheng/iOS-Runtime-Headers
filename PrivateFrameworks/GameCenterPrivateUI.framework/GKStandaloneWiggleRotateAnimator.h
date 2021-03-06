/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKBubbleFlowContainerView, _GKBubbleFlowPathTransitionInfo;

@interface GKStandaloneWiggleRotateAnimator : GKWiggleRotateAnimator {
    GKBubbleFlowContainerView *_containerView;
    long long _rotationDirection;
    _GKBubbleFlowPathTransitionInfo *_transitionContext;
}

@property(retain) GKBubbleFlowContainerView * containerView;
@property long long rotationDirection;
@property(retain) _GKBubbleFlowPathTransitionInfo * transitionContext;

- (void)animate;
- (void)animateForBubbleContainer:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)containerView;
- (void)dealloc;
- (void)readEndingPositions;
- (void)readStartingPositions;
- (bool)rotatingRightWithTransitionContext:(id)arg1;
- (long long)rotationDirection;
- (void)setContainerView:(id)arg1;
- (void)setRotationDirection:(long long)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;
- (id)transitionContextCreatingIfNeeded;

@end
