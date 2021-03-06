/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDBGBodyPlaceholder, GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDBGTitlePlaceholder, GQDSStyle, GQDSStylesheet;

@interface GQDBGAbstractSlide : NSObject {
    boolmCallGenerator;
    boolmHidden;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    char *mID;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    GQDSStyle *mSlideStyle;
    GQDSStylesheet *mStylesheet;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
}

- (char *)ID;
- (void)dealloc;
- (bool)isHidden;
- (int)readAttributesForSlide:(struct _xmlTextReader { }*)arg1;
- (id)slideStyle;
- (id)stylesheet;

@end
