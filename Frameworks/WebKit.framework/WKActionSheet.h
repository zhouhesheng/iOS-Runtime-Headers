/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@class <WKActionSheetDelegate>, WKContentView;

@interface WKActionSheet : UIAlertController {
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate> > { 
        void *m_ptr; 
    unsigned long long _arrowDirections;
    } _popoverPresentationControllerDelegateWhileRotating;
    } _presentedViewControllerWhileRotating;
    <WKActionSheetDelegate> *_sheetDelegate;
    WKContentView *_view;
    bool_isRotating;
    bool_readyToPresentAfterRotation;
}

@property unsigned long long arrowDirections;
@property <WKActionSheetDelegate> * sheetDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didRotateAndLayout;
- (unsigned long long)arrowDirections;
- (void)dealloc;
- (void)didRotate;
- (void)doneWithSheet;
- (id)initWithView:(id)arg1;
- (bool)presentSheet;
- (bool)presentSheetFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setArrowDirections:(unsigned long long)arg1;
- (void)setSheetDelegate:(id)arg1;
- (id)sheetDelegate;
- (void)updateSheetPosition;
- (void)willRotate;

@end
