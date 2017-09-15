//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark -

//
// File: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
// UUID: 2233D188-C88F-32A6-9A36-58D9CD582B21
//
//                           Arch: x86_64
//                Current version: 1.0.0
//          Compatibility version: 1.0.0
//                 Source version: 1390.0.0.0.0
//            Minimum iOS version: 8.0.0
//                    SDK version: 8.0.0
//
// Objective-C Garbage Collection: Unsupported
//

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSCopying
- (id)copyWithZone:(struct _NSZone *)arg1;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@interface DABehaviorOptions : NSObject
{
}

+ (void)removeDAManagedDefaults:(id)arg1;
+ (_Bool)addDAManagedDefaults:(id)arg1;
+ (id)DAManagedDefaultForKey:(id)arg1;
+ (_Bool)setDAManagedDefaults:(id)arg1;
+ (id)DAManagedDefaults;
+ (id)_daManagedDefaultsPath;
+ (_Bool)orphanCheckEnabled;
+ (_Bool)isEASParsingLogEnabled;
+ (int)numForgivable401s;
+ (_Bool)isAppleInternalInstall;
+ (_Bool)isCustomerInstall;
+ (double)holidayCalendarRefreshInterval;
+ (id)holidayCalendarURL;
+ (_Bool)earlyPingEnabled;
+ (_Bool)alwaysUseCalendarHomeSync;
+ (_Bool)babysitterEnabled;
+ (_Bool)isInHoldingPattern;
+ (_Bool)sendMeCardEverywhere;
+ (_Bool)writeOutBrokenCancelationRequests;
+ (_Bool)completelyIgnoreNotes;
+ (_Bool)allIMAPServersSupportNotesSearch;
+ (id)APSEnv;
+ (_Bool)CFNetworkLogging;
+ (_Bool)perfLogging;
+ (_Bool)useThunderhillBetaServers;
+ (_Bool)compressRequests;
+ (_Bool)promptForAllCerts;
+ (_Bool)calDAVRemindersForAll;
+ (_Bool)cookiesEnabled;
+ (_Bool)_shouldForceCookies:(_Bool *)arg1;
+ (id)whitelistedEASProtocols;
+ (double)defaultDAVProbeTimeout;
+ (double)defaultEASTaskTimeoutOutWasFound:(_Bool *)arg1;
+ (_Bool)ignoreBadLDAPCerts;
+ (int)refreshThrottleTime;
+ (_Bool)ignoreSupportedCommands;
+ (void)initialize;
+ (void)_startListeningForNotifications;

@end

@interface DAContactSearchResultElement : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_workPhone;
    NSString *_mobilePhone;
    NSString *_company;
    NSString *_title;
    NSString *_homePhone;
    NSString *_alias;
    NSString *_office;
    NSString *_serverSource;
    NSString *_recordName;
    NSString *_faxPhone;
    NSString *_department;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_zip;
    NSString *_country;
    NSData *_jpegPhoto;
    NSString *_imService;
    NSString *_imUsername;
    NSString *_uri;
    NSString *_buildingName;
    NSString *_appleFloor;
    NSString *_pagerNumber;
    NSString *_postalAddress;
    NSString *_homePostalAddress;
    NSString *_principalPath;
    NSString *_preferredUserAddress;
    NSArray *_cuAddresses;
    NSString *_iPhone;
    NSString *_mainPhone;
    NSString *_workFaxPhone;
    NSString *_identifierOnServer;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *identifierOnServer; // @synthesize identifierOnServer=_identifierOnServer;
@property(copy, nonatomic) NSString *workFaxPhone; // @synthesize workFaxPhone=_workFaxPhone;
@property(copy, nonatomic) NSString *mainPhone; // @synthesize mainPhone=_mainPhone;
@property(copy, nonatomic) NSString *iPhone; // @synthesize iPhone=_iPhone;
@property(copy, nonatomic) NSArray *cuAddresses; // @synthesize cuAddresses=_cuAddresses;
@property(copy, nonatomic) NSString *preferredUserAddress; // @synthesize preferredUserAddress=_preferredUserAddress;
@property(copy, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
@property(copy, nonatomic) NSString *homePostalAddress; // @synthesize homePostalAddress=_homePostalAddress;
@property(copy, nonatomic) NSString *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(copy, nonatomic) NSString *pagerNumber; // @synthesize pagerNumber=_pagerNumber;
@property(copy, nonatomic) NSString *appleFloor; // @synthesize appleFloor=_appleFloor;
@property(copy, nonatomic) NSString *buildingName; // @synthesize buildingName=_buildingName;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(copy, nonatomic) NSString *imUsername; // @synthesize imUsername=_imUsername;
@property(copy, nonatomic) NSString *imService; // @synthesize imService=_imService;
@property(copy, nonatomic) NSData *jpegPhoto; // @synthesize jpegPhoto=_jpegPhoto;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *department; // @synthesize department=_department;
@property(copy, nonatomic) NSString *faxPhone; // @synthesize faxPhone=_faxPhone;
@property(copy, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(copy, nonatomic) NSString *serverSource; // @synthesize serverSource=_serverSource;
@property(copy, nonatomic) NSString *office; // @synthesize office=_office;
@property(copy, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(copy, nonatomic) NSString *homePhone; // @synthesize homePhone=_homePhone;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(copy, nonatomic) NSString *workPhone; // @synthesize workPhone=_workPhone;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDAContactSearchResultElement:(id)arg1;
- (id)description;

@end

@interface DASearchQuery : NSObject
{
    int _timeLimit;
    int _state;
    NSString *_searchString;
    id <DASearchQueryConsumer> _consumer;
    NSString *_searchID;
    struct _NSRange _range;
}

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *searchID; // @synthesize searchID=_searchID;
@property(nonatomic) __weak id <DASearchQueryConsumer> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) int timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property(nonatomic) unsigned int maxResults;
- (id)dictionaryRepresentation;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (_Bool)isQueryRunning;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)description;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;

@end

@interface DAContactsSearchQuery : DASearchQuery
{
    _Bool _includePhotos;
    NSString *_searchBase;
    NSString *_searchScope;
}

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
@property(nonatomic) _Bool includePhotos; // @synthesize includePhotos=_includePhotos;
@property(copy, nonatomic) NSString *searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *searchBase; // @synthesize searchBase=_searchBase;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

@end

@interface DADAMContainerIDCacheKey : NSObject <NSCopying>
{
    NSString *_accountID;
    long long _dataclass;
}

@property(readonly, nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2;

@end

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    CDUnknownBlockType _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
}

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnectionIfServerIsRunning;
+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)_dispatchMessage:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)resetTimersAndWarnings;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned long long)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (_Bool)isOofSettingsSupportedForAccountWithID:(id)arg1;
- (_Bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(_Bool)arg3;
- (id)activeSyncDeviceIdentifier;
- (void)fillOutCurrentEASTimeZoneInfo;
- (_Bool)registerForInterrogationWithBlock:(CDUnknownBlockType)arg1;
- (void)_reallyRegisterForInterrogation;
- (id)statusReports;
- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)respondToSharedCalendarInvite:(long long)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;
- (void)handleURL:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned long long)arg3 andAccountWithID:(id)arg4;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (_Bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)cancelServerContactsSearch:(id)arg1;
- (_Bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(long long)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(long long)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(long long)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (void)_requestDaemonChangeAgentMonitoringStatus:(_Bool)arg1 waitForReply:(_Bool)arg2;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (_Bool)requestPolicyUpdateForAccountID:(id)arg1;
- (_Bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (id)decodedErrorFromData:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (id)_connection;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_tearDownInFlightObjects;

@end

@interface DADisableableObject : NSObject
{
    _Bool _isDisabled;
}

@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
- (void)disable;

@end

@interface DADownloadContext : NSObject
{
    NSString *_attachmentUUID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *attachmentUUID; // @synthesize attachmentUUID=_attachmentUUID;
- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (void)updateProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;
- (id)initWithAttachmentUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 downloadProgressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

@interface DAECalendarAvailabilityContext : NSObject
{
    CDUnknownBlockType _resultsBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (void)resultsReturned:(id)arg1;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding>
{
    long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (id)init;

@end

@interface DAECalendarDirectorySearchContext : NSObject
{
    CDUnknownBlockType _resultsBlock;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1 exceededResultLimit:(_Bool)arg2;
- (void)resultsReturned:(id)arg1;
- (id)initWithResultsBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>
{
    NSString *_displayName;
    NSString *_preferredAddress;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *preferredAddress; // @synthesize preferredAddress=_preferredAddress;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

@interface DAFolderChange : NSObject <NSSecureCoding>
{
    _Bool _renameOnCollision;
    unsigned int _taskId;
    long long _changeType;
    NSString *_folderId;
    NSString *_parentFolderId;
    NSString *_displayName;
    long long _dataclass;
    id <DAFolderChangeConsumer> _consumer;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak id <DAFolderChangeConsumer> consumer; // @synthesize consumer=_consumer;
@property(nonatomic) _Bool renameOnCollision; // @synthesize renameOnCollision=_renameOnCollision;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *parentFolderId; // @synthesize parentFolderId=_parentFolderId;
@property(retain, nonatomic) NSString *folderId; // @synthesize folderId=_folderId;
@property(nonatomic) long long changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initFolderChangeWithChangeType:(long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6;

@end

@interface DAMailboxSearchQuery : DASearchQuery
{
    _Bool _allOrNone;
    _Bool _deepTraversal;
    _Bool _rebuildResults;
    int _bodyType;
    int _MIMESupport;
    NSString *_collectionID;
    long long _truncationSize;
    NSDate *_priorToDate;
}

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;
@property(nonatomic) _Bool rebuildResults; // @synthesize rebuildResults=_rebuildResults;
@property(nonatomic) _Bool deepTraversal; // @synthesize deepTraversal=_deepTraversal;
@property(nonatomic) int MIMESupport; // @synthesize MIMESupport=_MIMESupport;
@property(retain, nonatomic) NSDate *priorToDate; // @synthesize priorToDate=_priorToDate;
@property(nonatomic) _Bool allOrNone; // @synthesize allOrNone=_allOrNone;
@property(nonatomic) long long truncationSize; // @synthesize truncationSize=_truncationSize;
@property(nonatomic) int bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;

@end

@interface DAOofParams : NSObject
{
    int _oofState;
    int _externalState;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_message;
    NSString *_externalMessage;
}

@property(retain, nonatomic) NSString *externalMessage; // @synthesize externalMessage=_externalMessage;
@property(nonatomic) int externalState; // @synthesize externalState=_externalState;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int oofState; // @synthesize oofState=_oofState;
- (void).cxx_destruct;
- (void)enableOof:(_Bool)arg1 From:(id)arg2 to:(id)arg3 withMessage:(id)arg4;
- (_Bool)isEnabled;
- (id)dictionaryRepresentationForASSettingTask;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)description;

@end

@interface DAOofSettingsInfo : DAOofParams
{
    NSString *_requestID;
    id <DAOofResponseDelegate> _consumer;
}

@property(nonatomic) __weak id <DAOofResponseDelegate> consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;

@end

@interface DASharedCalendarContext : NSObject
{
    _Bool _shouldSyncCalendar;
    NSString *_calendarID;
    NSString *_accountID;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) _Bool shouldSyncCalendar; // @synthesize shouldSyncCalendar=_shouldSyncCalendar;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) NSString *calendarID; // @synthesize calendarID=_calendarID;
- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

@interface DAStatusReport : NSObject
{
    _Bool _syncingAllowed;
    int _numHBIDataPoints;
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_uploadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSString *_protocolVersion;
    NSDate *_creationDate;
}

@property(nonatomic) int numHBIDataPoints; // @synthesize numHBIDataPoints=_numHBIDataPoints;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) _Bool syncingAllowed; // @synthesize syncingAllowed=_syncingAllowed;
@property(retain, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) NSNumber *falseMoreAvailableCount; // @synthesize falseMoreAvailableCount=_falseMoreAvailableCount;
@property(retain, nonatomic) NSNumber *uploadedElements; // @synthesize uploadedElements=_uploadedElements;
@property(retain, nonatomic) NSNumber *downloadedElements; // @synthesize downloadedElements=_downloadedElements;
@property(retain, nonatomic) NSNumber *failedProtocolRequests; // @synthesize failedProtocolRequests=_failedProtocolRequests;
@property(retain, nonatomic) NSNumber *failedNetworkRequests; // @synthesize failedNetworkRequests=_failedNetworkRequests;
@property(retain, nonatomic) NSNumber *successfulRequests; // @synthesize successfulRequests=_successfulRequests;
@property(retain, nonatomic) NSNumber *averageHBI; // @synthesize averageHBI=_averageHBI;
@property(retain, nonatomic) NSNumber *timeInNetworking; // @synthesize timeInNetworking=_timeInNetworking;
@property(retain, nonatomic) NSNumber *timeSpan; // @synthesize timeSpan=_timeSpan;
@property(retain, nonatomic) NSString *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *persistentUUID; // @synthesize persistentUUID=_persistentUUID;
- (void).cxx_destruct;
- (void)noteFalseMoreAvailableResponse;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2;
- (id)description;
- (void)mergeStatusReport:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)init;

@end

