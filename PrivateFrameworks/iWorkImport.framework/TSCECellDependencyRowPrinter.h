/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSString, TSCEEdgeListPrinter;

@interface TSCECellDependencyRowPrinter : NSObject {
    NSString *_cellID;
    TSCEEdgeListPrinter *_dependentsList;
    unsigned long long _dirtyPrecedentCount;
    TSCEEdgeListPrinter *_precedentsList;
    bool_isFormula;
    bool_isInCycle;
}

@property(retain) NSString * cellID;
@property unsigned long long dirtyPrecedentCount;
@property bool isFormula;
@property bool isInCycle;

- (void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2;
- (void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2;
- (id)cellID;
- (void)dealloc;
- (unsigned long long)dirtyPrecedentCount;
- (id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned long long)arg2;
- (bool)isFormula;
- (bool)isInCycle;
- (long long)numericCompare:(id)arg1;
- (void)setCellID:(id)arg1;
- (void)setDirtyPrecedentCount:(unsigned long long)arg1;
- (void)setIsFormula:(bool)arg1;
- (void)setIsInCycle:(bool)arg1;
- (id)stringForDependencyRow;

@end
