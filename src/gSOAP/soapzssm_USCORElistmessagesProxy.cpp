/* soapzssm_USCORElistmessagesProxy.cpp
   Generated by gSOAP 2.8.29 for roffssm.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapzssm_USCORElistmessagesProxy.h"

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	zssm_USCORElistmessagesProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(const zssm_USCORElistmessagesProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	zssm_USCORElistmessagesProxy_init(_soap->imode, _soap->omode);
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(const char *endpoint)
{	this->soap = soap_new();
	this->soap_own = true;
	zssm_USCORElistmessagesProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = endpoint;
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	zssm_USCORElistmessagesProxy_init(iomode, iomode);
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(const char *endpoint, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	zssm_USCORElistmessagesProxy_init(iomode, iomode);
	soap_endpoint = endpoint;
}

zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	zssm_USCORElistmessagesProxy_init(imode, omode);
}

zssm_USCORElistmessagesProxy::~zssm_USCORElistmessagesProxy()
{	if (this->soap_own)
		soap_free(this->soap);
}

void zssm_USCORElistmessagesProxy::zssm_USCORElistmessagesProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        {"SOAP-ENV", "http://www.w3.org/2003/05/soap-envelope", "http://schemas.xmlsoap.org/soap/envelope/", NULL},
        {"SOAP-ENC", "http://www.w3.org/2003/05/soap-encoding", "http://schemas.xmlsoap.org/soap/encoding/", NULL},
        {"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
        {"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
        {"ns1", "urn:sap-com:document:sap:rfc:functions", NULL, NULL},
        {"chan", "http://schemas.microsoft.com/ws/2005/02/duplex", NULL, NULL},
        {"wsa5", "http://www.w3.org/2005/08/addressing", "http://schemas.xmlsoap.org/ws/2004/08/addressing", NULL},
        {NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

#ifndef WITH_PURE_VIRTUAL
zssm_USCORElistmessagesProxy *zssm_USCORElistmessagesProxy::copy()
{	zssm_USCORElistmessagesProxy *dup = SOAP_NEW_COPY(zssm_USCORElistmessagesProxy);
	if (dup)
		soap_copy_context(dup->soap, this->soap);
	return dup;
}
#endif

zssm_USCORElistmessagesProxy& zssm_USCORElistmessagesProxy::operator=(const zssm_USCORElistmessagesProxy& rhs)
{	if (this->soap_own)
		soap_free(this->soap);
	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
	return *this;
}

void zssm_USCORElistmessagesProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void zssm_USCORElistmessagesProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	zssm_USCORElistmessagesProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void zssm_USCORElistmessagesProxy::soap_noheader()
{	this->soap->header = NULL;
}

void zssm_USCORElistmessagesProxy::soap_header(char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance)
{	::soap_header(this->soap);
	this->soap->header->wsa5__MessageID = wsa5__MessageID;
	this->soap->header->wsa5__RelatesTo = wsa5__RelatesTo;
	this->soap->header->wsa5__From = wsa5__From;
	this->soap->header->wsa5__ReplyTo = wsa5__ReplyTo;
	this->soap->header->wsa5__FaultTo = wsa5__FaultTo;
	this->soap->header->wsa5__To = wsa5__To;
	this->soap->header->wsa5__Action = wsa5__Action;
	this->soap->header->chan__ChannelInstance = chan__ChannelInstance;
}

const SOAP_ENV__Header *zssm_USCORElistmessagesProxy::soap_header()
{	return this->soap->header;
}

const SOAP_ENV__Fault *zssm_USCORElistmessagesProxy::soap_fault()
{	return this->soap->fault;
}

const char *zssm_USCORElistmessagesProxy::soap_fault_string()
{	return *soap_faultstring(this->soap);
}

const char *zssm_USCORElistmessagesProxy::soap_fault_detail()
{	return *soap_faultdetail(this->soap);
}

int zssm_USCORElistmessagesProxy::soap_close_socket()
{	return soap_closesock(this->soap);
}

int zssm_USCORElistmessagesProxy::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

void zssm_USCORElistmessagesProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void zssm_USCORElistmessagesProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *zssm_USCORElistmessagesProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int zssm_USCORElistmessagesProxy::Z_USCORESSM_USCORELIST_USCOREMESSAGES(const char *endpoint, const char *soap_action, _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES, _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse &ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse)
{	struct soap *soap = this->soap;
	struct __ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://roffcloud4.roff.pt:8001/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
	if (soap_action == NULL)
		soap_action = "urn:sap-com:document:sap:rfc:functions:ZSSM_LIST_MESSAGES:Z_SSM_LIST_MESSAGESRequest";
	soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES.ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES = ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES, "-ns1:Z_SSM_LIST_MESSAGES", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES, "-ns1:Z_SSM_LIST_MESSAGES", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse)
		return soap_closesock(soap);
	ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse.soap_get(soap, "ns1:Z_SSM_LIST_MESSAGESResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

int zssm_USCORElistmessagesProxy::Z_USCORESSM_USCORELIST_USCOREMESSAGES_(const char *endpoint, const char *soap_action, _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES *ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES, _ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse &ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse)
{	struct soap *soap = this->soap;
	struct __ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_ soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_;
	if (endpoint)
		soap_endpoint = endpoint;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://roffcloud4.roff.pt:8001/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages";
	if (soap_action == NULL)
		soap_action = "urn:sap-com:document:sap:rfc:functions:ZSSM_LIST_MESSAGES:Z_SSM_LIST_MESSAGESRequest";
	soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_.ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES = ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_, "-ns1:Z_SSM_LIST_MESSAGES", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_(soap, &soap_tmp___ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGES_, "-ns1:Z_SSM_LIST_MESSAGES", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse)
		return soap_closesock(soap);
	ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns1__Z_USCORESSM_USCORELIST_USCOREMESSAGESResponse.soap_get(soap, "ns1:Z_SSM_LIST_MESSAGESResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */
