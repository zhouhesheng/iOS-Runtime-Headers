/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class <DAFolderChangeConsumer>, NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {
    long long _changeType;
    <DAFolderChangeConsumer> *_consumer;
    long long _dataclass;
    NSString *_displayName;
    NSString *_folderId;
    NSString *_parentFolderId;
    unsigned int _taskId;
    bool_renameOnCollision;
}

@property long long changeType;
@property <DAFolderChangeConsumer> * consumer;
@property long long dataclass;
@property(retain) NSString * displayName;
@property(retain) NSString * folderId;
@property(retain) NSString * parentFolderId;
@property bool renameOnCollision;
@property unsigned int taskId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)changeType;
- (id)consumer;
- (long long)dataclass;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)folderId;
- (id)initFolderChangeWithChangeType:(long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)mf_deferredOperation;
- (id)parentFolderId;
- (bool)renameOnCollision;
- (void)setChangeType:(long long)arg1;
- (void)setConsumer:(id)arg1;
- (void)setDataclass:(long long)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFolderId:(id)arg1;
- (void)setParentFolderId:(id)arg1;
- (void)setRenameOnCollision:(bool)arg1;
- (void)setTaskId:(unsigned int)arg1;
- (unsigned int)taskId;

@end
