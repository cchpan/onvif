/* soapDisplayBindingService.h
   Generated by gSOAP 2.8.28 from onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapDisplayBindingService_H
#define soapDisplayBindingService_H
#include "soapH.h"
class SOAP_CMAC DisplayBindingService
{ public:
	struct soap *soap;
	bool soap_own;
	/// Variables globally declared in onvif.h (non-static)
	/// Constructor
	DisplayBindingService();
	/// Copy constructor
	DisplayBindingService(const DisplayBindingService&);
	/// Constructor to use/share an engine state
	DisplayBindingService(struct soap*);
	/// Constructor with engine input+output mode control
	DisplayBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	DisplayBindingService(soap_mode imode, soap_mode omode);
	/// Destructor deletes non-shared engine context only (use destroy() to delete deserialized data)
	virtual ~DisplayBindingService();
	/// Delete all deserialized data (with soap_destroy() and soap_end())
	virtual	void destroy();
	/// Delete all deserialized data and reset to defaults
	virtual	void reset();
	/// Initializer used by constructor
	virtual	void DisplayBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a new copy
	virtual	DisplayBindingService *copy() SOAP_PURE_VIRTUAL;
	/// Copy assignment
	DisplayBindingService& operator=(const DisplayBindingService&);
	/// Close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Force close connection (can kill a thread blocked on IO)
	virtual	int soap_force_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
#ifndef WITH_COMPAT
	virtual	void soap_stream_fault(std::ostream&);
#endif
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Run simple single-thread SSL service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int ssl_run(int port);
#endif
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
	/// Then accept SSL handshake, when SSL is used
	virtual	int ssl_accept();
#endif
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error or SOAP_OK)
	virtual	int dispatch();
	virtual	int dispatch(struct soap *soap);

	///
	/// Service operations (you should define these):
	/// Note: compile with -DWITH_PURE_VIRTUAL for pure virtual methods
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_tls__GetServiceCapabilities *tls__GetServiceCapabilities, _tls__GetServiceCapabilitiesResponse &tls__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetLayout' (returns error code or SOAP_OK)
	virtual	int GetLayout(_tls__GetLayout *tls__GetLayout, _tls__GetLayoutResponse &tls__GetLayoutResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetLayout' (returns error code or SOAP_OK)
	virtual	int SetLayout(_tls__SetLayout *tls__SetLayout, _tls__SetLayoutResponse &tls__SetLayoutResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetDisplayOptions' (returns error code or SOAP_OK)
	virtual	int GetDisplayOptions(_tls__GetDisplayOptions *tls__GetDisplayOptions, _tls__GetDisplayOptionsResponse &tls__GetDisplayOptionsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPaneConfigurations' (returns error code or SOAP_OK)
	virtual	int GetPaneConfigurations(_tls__GetPaneConfigurations *tls__GetPaneConfigurations, _tls__GetPaneConfigurationsResponse &tls__GetPaneConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'GetPaneConfiguration' (returns error code or SOAP_OK)
	virtual	int GetPaneConfiguration(_tls__GetPaneConfiguration *tls__GetPaneConfiguration, _tls__GetPaneConfigurationResponse &tls__GetPaneConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetPaneConfigurations' (returns error code or SOAP_OK)
	virtual	int SetPaneConfigurations(_tls__SetPaneConfigurations *tls__SetPaneConfigurations, _tls__SetPaneConfigurationsResponse &tls__SetPaneConfigurationsResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'SetPaneConfiguration' (returns error code or SOAP_OK)
	virtual	int SetPaneConfiguration(_tls__SetPaneConfiguration *tls__SetPaneConfiguration, _tls__SetPaneConfigurationResponse &tls__SetPaneConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'CreatePaneConfiguration' (returns error code or SOAP_OK)
	virtual	int CreatePaneConfiguration(_tls__CreatePaneConfiguration *tls__CreatePaneConfiguration, _tls__CreatePaneConfigurationResponse &tls__CreatePaneConfigurationResponse) SOAP_PURE_VIRTUAL;

	/// Web service operation 'DeletePaneConfiguration' (returns error code or SOAP_OK)
	virtual	int DeletePaneConfiguration(_tls__DeletePaneConfiguration *tls__DeletePaneConfiguration, _tls__DeletePaneConfigurationResponse &tls__DeletePaneConfigurationResponse) SOAP_PURE_VIRTUAL;
};
#endif
