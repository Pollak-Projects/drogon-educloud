/**
 *
 *  Users.h
 *  DO NOT EDIT. This file is generated by drogon_ctl
 *
 */

#pragma once
#include <drogon/orm/Result.h>
#include <drogon/orm/Row.h>
#include <drogon/orm/Field.h>
#include <drogon/orm/SqlBinder.h>
#include <drogon/orm/Mapper.h>
#include <trantor/utils/Date.h>
#include <json/json.h>
#include <string>
#include <memory>
#include <vector>
#include <tuple>
#include <stdint.h>
#include <iostream>

using namespace drogon::orm;

namespace drogon_model
{
namespace postgres
{
class Users
{
  public:
    struct Cols
    {
        static const std::string user_id;
        static const std::string user_name;
        static const std::string password;
        static const std::string org_name;
        static const std::string signature;
        static const std::string avatar_id;
        static const std::string id;
        static const std::string salt;
        static const std::string admin;
    };

    const static int primaryKeyNumber;
    const static std::string tableName;
    const static bool hasPrimaryKey;
    const static std::string primaryKeyName;
    typedef int32_t PrimaryKeyType;
    const PrimaryKeyType &getPrimaryKey() const;
    explicit Users(const Row &r) noexcept;
    Users() = default;

    /**  For column user_id  */
    /// Get the value of the column user_id, returns the default value if the
    /// column is null
    const std::string &getValueOfUserId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getUserId() const noexcept;
    /// Set the value of the column user_id
    void setUserId(const std::string &userId) noexcept;
    void setUserId(std::string &&userId) noexcept;

    /**  For column user_name  */
    /// Get the value of the column user_name, returns the default value if the
    /// column is null
    const std::string &getValueOfUserName() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getUserName() const noexcept;
    /// Set the value of the column user_name
    void setUserName(const std::string &userName) noexcept;
    void setUserName(std::string &&userName) noexcept;

    /**  For column password  */
    /// Get the value of the column password, returns the default value if the
    /// column is null
    const std::string &getValueOfPassword() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getPassword() const noexcept;
    /// Set the value of the column password
    void setPassword(const std::string &password) noexcept;
    void setPassword(std::string &&password) noexcept;

    /**  For column org_name  */
    /// Get the value of the column org_name, returns the default value if the
    /// column is null
    const std::string &getValueOfOrgName() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getOrgName() const noexcept;
    /// Set the value of the column org_name
    void setOrgName(const std::string &orgName) noexcept;
    void setOrgName(std::string &&orgName) noexcept;

    /**  For column signature  */
    /// Get the value of the column signature, returns the default value if the
    /// column is null
    const std::string &getValueOfSignature() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSignature() const noexcept;
    /// Set the value of the column signature
    void setSignature(const std::string &signature) noexcept;
    void setSignature(std::string &&signature) noexcept;

    /**  For column avatar_id  */
    /// Get the value of the column avatar_id, returns the default value if the
    /// column is null
    const std::string &getValueOfAvatarId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getAvatarId() const noexcept;
    /// Set the value of the column avatar_id
    void setAvatarId(const std::string &avatarId) noexcept;
    void setAvatarId(std::string &&avatarId) noexcept;

    /**  For column id  */
    /// Get the value of the column id, returns the default value if the column
    /// is null
    const int32_t &getValueOfId() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<int32_t> &getId() const noexcept;

    /**  For column salt  */
    /// Get the value of the column salt, returns the default value if the
    /// column is null
    const std::string &getValueOfSalt() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<std::string> &getSalt() const noexcept;
    /// Set the value of the column salt
    void setSalt(const std::string &salt) noexcept;
    void setSalt(std::string &&salt) noexcept;

    /**  For column admin  */
    /// Get the value of the column admin, returns the default value if the
    /// column is null
    const bool &getValueOfAdmin() const noexcept;
    /// Return a shared_ptr object pointing to the column const value, or an
    /// empty shared_ptr object if the column is null
    const std::shared_ptr<bool> &getAdmin() const noexcept;
    /// Set the value of the column admin
    void setAdmin(const bool &admin) noexcept;

    static size_t getColumnNumber() noexcept
    {
        return 9;
    }
    static const std::string &getColumnName(size_t index) noexcept(false);

    Json::Value toJson() const;

  private:
    friend Mapper<Users>;
    static const std::vector<std::string> &insertColumns() noexcept;
    void outputArgs(drogon::orm::internal::SqlBinder &binder) const;
    const std::vector<std::string> updateColumns() const;
    void updateArgs(drogon::orm::internal::SqlBinder &binder) const;
    /// For mysql or sqlite3
    void updateId(const uint64_t id);
    std::shared_ptr<std::string> _userId;
    std::shared_ptr<std::string> _userName;
    std::shared_ptr<std::string> _password;
    std::shared_ptr<std::string> _orgName;
    std::shared_ptr<std::string> _signature;
    std::shared_ptr<std::string> _avatarId;
    std::shared_ptr<int32_t> _id;
    std::shared_ptr<std::string> _salt;
    std::shared_ptr<bool> _admin;
    struct MetaData
    {
        const std::string _colName;
        const std::string _colType;
        const std::string _colDatabaseType;
        const ssize_t _colLength;
        const bool _isAutoVal;
        const bool _isPrimaryKey;
        const bool _notNull;
    };
    static const std::vector<MetaData> _metaData;
    bool _dirtyFlag[9] = {false};
};

}  // namespace postgres
}  // namespace drogon_model
