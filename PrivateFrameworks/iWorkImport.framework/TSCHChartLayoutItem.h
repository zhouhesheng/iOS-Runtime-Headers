/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, TSCHChartInfo, TSCHChartLayoutItem, TSCHChartModel, TSCHChartRootLayoutItem;

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent> {
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    boolmDrawingRectCacheValid;
    boolmLayoutSizeSet;
    boolmMinSizeCacheValid;
    boolmOverhangRectCacheValid;
    boolmTreeBuilt;
    NSArray *mChildren;
    } mDrawingRectCache;
    } mLayoutSize;
    } mMinSizeCache;
    } mOffset;
    } mOverhangRectCache;
    TSCHChartLayoutItem *mParent;
}

@property(readonly) TSCHChartInfo * chartInfo;
@property(readonly) unsigned long long dataSetIndex;
@property(readonly) struct CGPoint { double x1; double x2; } drawingOffset;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } drawingRect;
@property(readonly) struct CGSize { double x1; double x2; } drawingSize;
@property(readonly) bool isInResize;
@property struct CGPoint { double x1; double x2; } layoutOffset;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutRect;
@property struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; } layoutSettings;
@property struct CGSize { double x1; double x2; } layoutSize;
@property(readonly) struct CGSize { double x1; double x2; } minSize;
@property(readonly) TSCHChartModel * model;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overhangRect;
@property(readonly) TSCHChartLayoutItem * parent;
@property(readonly) TSCHChartRootLayoutItem * root;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootedDrawingRect;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rootedLayoutRect;
@property(readonly) struct CGSize { double x1; double x2; } startingSize;

+ (id)chartLayoutWithChartInfo:(id)arg1;

- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (id)chartInfo;
- (void)clearAll;
- (void)clearDrawingRect;
- (void)clearLayoutSize;
- (void)clearMinSize;
- (void)clearOverhangRect;
- (void)clearParent;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (id)description;
- (struct CGPoint { double x1; double x2; })drawingOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingRect;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)hitChartElements:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id)arg2;
- (id)initWithParent:(id)arg1;
- (bool)isInResize;
- (struct CGPoint { double x1; double x2; })layoutOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutRect;
- (struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })layoutSettings;
- (struct CGSize { double x1; double x2; })layoutSize;
- (void)layoutUsingMethod:(int)arg1;
- (struct CGSize { double x1; double x2; })minSize;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (double)overhangMagnitudeForEdge:(unsigned int)arg1;
- (struct CGPoint { double x1; double x2; })overhangOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overhangRect;
- (struct CGSize { double x1; double x2; })overhangSize;
- (id)p_description;
- (void)p_iterateChildrenWithBlock:(id)arg1;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (id)parent;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id)arg2;
- (id)renderersWithRep:(id)arg1;
- (id)root;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootedDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rootedLayoutRect;
- (void)setLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLayoutSettings:(struct { boolx1; boolx2; boolx3; boolx4; boolx5; boolx6; unsigned long long x7; })arg1;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })startingSize;
- (bool)stopIteratingItemsContainingPoint:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id)arg2;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end
