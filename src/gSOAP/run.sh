#!/bin/sh

echo "Running"

$prd_wsdl=http://servicedesk.roff.pt/sap/bc/srt/wsdl/flv_10002A111AD1/srvc_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100
#endpoint: http://servicedesk.roff.pt/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages
#wsdl2h -r:OUTSYSTEMS:systemsout -o roffssm.h -t /Users/nununo/bin/gsoap-2.8/WS/typemap.dat http://servicedesk.roff.pt/sap/bc/srt/wsdl/flv_10002A111AD1/srvc_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100

#DEV http://servicedesk.roff.pt:3262/sap/bc/srt/wsdl/flv_10002A111AD1/bndg_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100
#endpoint: http://roffcloud4.roff.pt:8001/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages
#endpoint: http://servicedesk.roff.pt:3262/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages
wsdl2h -r:OUTSYSTEMS:systemsout -o roffssm.h -t /Users/nununo/bin/gsoap-2.8/WS/typemap.dat http://servicedesk.roff.pt:3262/sap/bc/srt/wsdl/flv_10002A111AD1/bndg_url/sap/bc/srt/rfc/sap/zssm_list_messages/100/zssm_listmessages/zssm_listmessages?sap-client=100

soapcpp2 -j -CL -I/Users/nununo/bin/gsoap-2.8/import roffssm.h