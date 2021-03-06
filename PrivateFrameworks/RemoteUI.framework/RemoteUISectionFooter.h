/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class <RUITableFooterDelegate>, NSString, NSURL, UIButton, UILabel;

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    <RUITableFooterDelegate> *_delegate;
    UIButton *_linkButton;
    NSURL *_linkURL;
    long long _textAlignment;
    UILabel *_textLabel;
    bool_usesCustomTextAlignment;
}

@property(copy,readonly) NSString * debugDescription;
@property <RUITableFooterDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) UIButton * linkButton;
@property(retain) NSURL * linkURL;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_linkPressed;
- (id)delegate;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)linkButton;
- (id)linkURL;
- (void)setDelegate:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;

@end
