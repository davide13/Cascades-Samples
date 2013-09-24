/*!
* Copyright (c) 2012, 2013 BlackBerry Limited.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef CONFIGURATIONSERVICE_HPP
#define CONFIGURATIONSERVICE_HPP

#include "../dao/ConfigurationDAO.hpp"

namespace pushcollector
{

/*!
 * Offers services related to the configuration settings of the application.
 * Note: In our application, we expose the configuration settings to the user.
 * However, in an actual push application, you would likely have these settings
 * hard coded under the covers.  We expose them in our application for testing /
 * debugging purposes.
 */
class PUSHCOLLECTOR_EXPORT ConfigurationService
{
public:
    ConfigurationService();
    ~ConfigurationService();

    /*!
     * Saves the configuration in the persistent store
     */
    void save(const Configuration &config);

    /*!
     * Removes the configuration in the persistent store
     */
    void remove();

    /*!
     * Returns the configuration in the persistent store
     */
    Configuration& configuration();

    /*!
     * Returns whether there is the configuration already in the persistent store
     */
    bool hasConfiguration() const;

private:
    ConfigurationDAO m_configDAO;
};

} // namespace pushcollector
#endif
