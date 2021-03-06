/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKCalloutBackgroundView, NSMutableArray, NSString, UILabel, UIView, UIView<_MKCalloutAccessoryView>, _MKSmallCalloutPassthroughButton;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    MKCalloutBackgroundView *_calloutBackgroundView;
    UIView<_MKCalloutAccessoryView> *_detailView;
    UIView<_MKCalloutAccessoryView> *_externalLeftView;
    UIView<_MKCalloutAccessoryView> *_externalRightView;
    NSMutableArray *_lastConstraints;
    UIView *_leftSpacerView;
    UIView<_MKCalloutAccessoryView> *_leftView;
    unsigned long long _mapDisplayStyle;
    _MKSmallCalloutPassthroughButton *_maskedContainerView;
    double _maxWidth;
    } _preferredContentSize;
    UIView *_rightSpacerView;
    UIView<_MKCalloutAccessoryView> *_rightView;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    UIView *_unmaskedContainerView;
    bool_initialDetailViewPositioning;
    bool_initialLeftViewPositioning;
    bool_initialRightViewPositioning;
    bool_shouldPositionTitleForMapsTransitionMovingSideways;
}

@property(readonly) struct CGSize { double x1; double x2; } _preferredContentSize;
@property(retain) MKCalloutBackgroundView * calloutBackgroundView;
@property(copy) NSString * calloutSubtitle;
@property(copy) NSString * calloutTitle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIView * detailView;
@property(readonly) unsigned long long hash;
@property(retain) UIView * leftView;
@property unsigned long long mapDisplayStyle;
@property double maximumWidth;
@property(retain) UIView * rightView;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })_preferredContentSize;
- (id)_subtitleLabel;
- (void)_updateAccessoryViewStyles;
- (void)_updatePreferredContentSize;
- (void)beginMapsTransitionMovingSideways;
- (id)calloutBackgroundView;
- (id)calloutSubtitle;
- (id)calloutTitle;
- (bool)canDisplayCompleteTitleWhenExpanded;
- (void)dealloc;
- (id)detailView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftView;
- (unsigned long long)mapDisplayStyle;
- (double)maximumWidth;
- (void)reset;
- (id)rightView;
- (void)setCalloutBackgroundView:(id)arg1;
- (void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setCalloutSubtitle:(id)arg1;
- (void)setCalloutTitle:(id)arg1;
- (void)setDetailView:(id)arg1 animated:(bool)arg2;
- (void)setDetailView:(id)arg1;
- (void)setLeftView:(id)arg1 animated:(bool)arg2;
- (void)setLeftView:(id)arg1;
- (void)setMapDisplayStyle:(unsigned long long)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setRightView:(id)arg1 animated:(bool)arg2;
- (void)setRightView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateConstraints;

@end
