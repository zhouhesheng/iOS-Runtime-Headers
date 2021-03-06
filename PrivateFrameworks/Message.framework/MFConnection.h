/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <MFSASLSecurityLayer>, NSArray, NSData, NSMutableString, NSString, _MFSocket;

@interface MFConnection : NSObject {
    unsigned int _isFetching : 1;
    unsigned int _allowFallbacks : 1;
    unsigned int _compressionEnabled : 1;
    char *_buffer;
    unsigned long long _bufferLength;
    long long _bufferRemainingBytes;
    unsigned long long _bufferStart;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_deflater;
    unsigned long long _desiredBufferLength;
    unsigned int _dontLogReads;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } *_inflater;
    double _lastUsedTime;
    NSData *_logData;
    unsigned int _readBytesNotLogged;
    NSMutableString *_readBytesToLog;
    <MFSASLSecurityLayer> *_securityLayer;
    _MFSocket *_socket;
    char *_zbuffer;
}

@property(readonly) NSArray * authenticationMechanisms;
@property(readonly) NSArray * capabilities;
@property(readonly) bool hasBytesAvailable;
@property(readonly) bool isCellularConnection;
@property bool isFetching;
@property(readonly) bool isValid;
@property(readonly) double lastUsedTime;
@property(readonly) bool loginDisabled;
@property(readonly) NSString * securityProtocol;
@property(readonly) bool usesOpportunisticSockets;

+ (void)flushLog;
+ (void)initialize;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (bool)logAllSocketActivity;
+ (void)logBytes:(const char *)arg1 length:(int)arg2;
+ (id)logClasses;
+ (void)readLoggingDefaults;
+ (void)setLogActivityOnHosts:(id)arg1;
+ (void)setLogActivityOnPorts:(id)arg1;
+ (void)setLogAllSocketActivity:(bool)arg1;
+ (void)setLogClasses:(id)arg1;
+ (bool)shouldTryFallbacksAfterError:(id)arg1;

- (void)_setupNetworkLogging;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (bool)authenticateUsingAccount:(id)arg1;
- (id)authenticationMechanisms;
- (id)capabilities;
- (bool)connectUsingAccount:(id)arg1;
- (bool)connectUsingFallbacksForAccount:(id)arg1;
- (bool)connectUsingSettings:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)disconnect;
- (void)enableReadLogging:(bool)arg1;
- (void)enableThroughputMonitoring:(bool)arg1;
- (bool)hasBytesAvailable;
- (bool)isCellularConnection;
- (bool)isFetching;
- (bool)isValid;
- (double)lastUsedTime;
- (void)logReadChars:(const char *)arg1 length:(unsigned long long)arg2;
- (bool)loginDisabled;
- (bool)readBytesIntoData:(id)arg1 desiredLength:(unsigned long long)arg2;
- (bool)readLineIntoData:(id)arg1;
- (id)securityProtocol;
- (void)setAllowsFallbacks:(bool)arg1;
- (void)setDesiredReadBufferLength:(unsigned long long)arg1;
- (void)setIsFetching:(bool)arg1;
- (bool)startCompression;
- (bool)startTLSForAccount:(id)arg1;
- (bool)usesOpportunisticSockets;
- (bool)writeBytes:(const char *)arg1 length:(unsigned long long)arg2 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)writeData:(id)arg1 dontLogBytesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)writeData:(id)arg1;

@end
