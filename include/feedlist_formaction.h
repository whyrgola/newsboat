#ifndef NEWSBEUTER_FEEDLIST_FORMACTION__H
#define NEWSBEUTER_FEEDLIST_FORMACTION__H

#include <formaction.h>

namespace newsbeuter {

class feedlist_formaction : public formaction {
	public:
		feedlist_formaction(view *, std::string formstr);
		virtual ~feedlist_formaction();
		virtual void process_operation(operation op);
		virtual void prepare();
		virtual void init();
		void set_feedlist(std::vector<rss_feed>& feeds);
		void set_tags(const std::vector<std::string>& t);
	private:
		bool zero_feedpos;
		unsigned int feeds_shown;
		bool auto_open;
		bool quit;
		std::vector<std::pair<rss_feed *, unsigned int> > visible_feeds;
		std::string tag;
		std::vector<std::string> tags;
};

}


#endif
