/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDPushReceivedDropped : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int dualChannelState : 1; 
        unsigned int isFromStorage : 1; 
        unsigned int linkQuality : 1; 
        unsigned int payloadSize : 1; 
        unsigned int receiveOffset : 1; 
    unsigned int _connectionType;
    unsigned int _dualChannelState;
    NSString *_guid;
    } _has;
    unsigned int _isFromStorage;
    int _linkQuality;
    unsigned int _payloadSize;
    unsigned int _receiveOffset;
    unsigned long long _timestamp;
}

@property unsigned int connectionType;
@property unsigned int dualChannelState;
@property(retain) NSString * guid;
@property bool hasConnectionType;
@property bool hasDualChannelState;
@property(readonly) bool hasGuid;
@property bool hasIsFromStorage;
@property bool hasLinkQuality;
@property bool hasPayloadSize;
@property bool hasReceiveOffset;
@property bool hasTimestamp;
@property unsigned int isFromStorage;
@property int linkQuality;
@property unsigned int payloadSize;
@property unsigned int receiveOffset;
@property unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dualChannelState;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasDualChannelState;
- (bool)hasGuid;
- (bool)hasIsFromStorage;
- (bool)hasLinkQuality;
- (bool)hasPayloadSize;
- (bool)hasReceiveOffset;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isFromStorage;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (unsigned int)payloadSize;
- (bool)readFrom:(id)arg1;
- (unsigned int)receiveOffset;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDualChannelState:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDualChannelState:(bool)arg1;
- (void)setHasIsFromStorage:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasReceiveOffset:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsFromStorage:(unsigned int)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setPayloadSize:(unsigned int)arg1;
- (void)setReceiveOffset:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
