/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cz_zcu_connectors_kerberos_KerberosConnector */

#ifndef _Included_cz_zcu_connectors_kerberos_KerberosConnector
#define _Included_cz_zcu_connectors_kerberos_KerberosConnector
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_init
 * Signature: (Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1init
  (JNIEnv *, jobject, jclass);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1destroy
  (JNIEnv *, jobject);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_renew
 * Signature: (Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1renew
  (JNIEnv *, jobject, jclass);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_create
 * Signature: (Ljava/lang/String;Ljava/lang/String;JJILjava/lang/String;JJI)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1create
  (JNIEnv *, jobject, jstring, jstring, jlong, jlong, jint, jstring, jlong, jlong, jint);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_delete
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1delete
  (JNIEnv *, jobject, jstring);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_search
 * Signature: (Ljava/lang/String;II)Lcz/zcu/connectors/KerberosSearchResults;
 */
JNIEXPORT jobject JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1search
  (JNIEnv *, jobject, jstring, jint, jint);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_rename
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1rename
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_chpasswd
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1chpasswd
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     cz_zcu_connectors_kerberos_KerberosConnector
 * Method:    krb5_modify
 * Signature: (Ljava/lang/String;JJILjava/lang/String;JJI)V
 */
JNIEXPORT void JNICALL Java_cz_zcu_connectors_kerberos_KerberosConnector_krb5_1modify
  (JNIEnv *, jobject, jstring, jlong, jlong, jint, jstring, jlong, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
