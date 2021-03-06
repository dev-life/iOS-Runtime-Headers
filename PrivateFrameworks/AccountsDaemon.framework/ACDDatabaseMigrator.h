/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ACDDatabaseMigrator : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    ACDDatabase *_database;
    NSManagedObjectContext *_migrationContext;
}

- (void).cxx_destruct;
- (id)_compatibleModelForStoreAtURL:(id)arg1;
- (id)_fetchAllAuthorizationEntitiesForModelVersion:(int)arg1;
- (void)_migrateAccessAuthorizationsToTCCFromModelVersion:(int)arg1;
- (id)_setUpContextForMigration;
- (int)_versionForModel:(id)arg1;
- (id)initForDatabase:(id)arg1;
- (BOOL)run;

@end
